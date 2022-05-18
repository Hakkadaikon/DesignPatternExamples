//-----------------------------------------------------------------------------
// File        : legacy_product.hpp
// Description : This class provides the new functionality.
// Author      : hakkadaikon
//-----------------------------------------------------------------------------
#ifndef _PRODUCT_HPP_
#define _PRODUCT_HPP_

#include <iostream>
#include "product_interface.hpp"

/// <summary>
/// This class provides the new functionality.
/// </summary>
/// <see cref="ProductInterface" />
class Product : public ProductInterface
{
public:
    void execute() override final
    {
        std::cout << "product." << std::endl;
    }
};

#endif
