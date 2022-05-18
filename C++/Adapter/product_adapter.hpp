//-----------------------------------------------------------------------------
// File        : legacy_product.hpp
// Description : This class provides a switching mechanism between legacy 
//               and new functions.
// Author      : hakkadaikon
//-----------------------------------------------------------------------------
#ifndef _PRODUCT_ADAPTER_HPP_
#define _PRODUCT_ADAPTER_HPP_

#include <iostream>
#include "product_interface.hpp"
#include "legacy_product.hpp"
#include "product.hpp"

/// <summary>
/// This class provides a switching mechanism between legacy and new functions.
/// </summary>
/// <see cref="ProductInterface" />
class ProductAdapter : public ProductInterface
{
private:
    ProductInterface* product;

public:
    /// <summary>
    /// Constructor.
    /// </summary>
    /// <param name="kind">
    /// product kind.
    /// legacy_product : use legacy product class.
    /// product        : use new product class.
    /// </param>
    ProductAdapter(const std::string& kind)
    {
        if (kind._Equal("legacy_product"))
        {
            this->product = new LegacyProduct();
            return;
        }

        if (kind._Equal("product"))
        {
            this->product = new Product();
            return;
        }

        throw std::runtime_error("Invalid product kind.");
    }

    /// <summary>
    /// Destructor.
    /// </summary>
    ~ProductAdapter()
    {
        delete product;
    }

    void execute() override final
    {
        this->product->execute();
    }
};

#endif
