//-----------------------------------------------------------------------------
// File        : legacy_product.hpp
// Description : This class provides the legacy functionality.
// Author      : hakkadaikon
//-----------------------------------------------------------------------------
#ifndef _LEGACY_PRODUCT_HPP_
#define _LEGACY_PRODUCT_HPP_

#include <iostream>
#include "product_interface.hpp"

/// <summary>
/// This class provides the legacy functionality.
/// </summary>
/// <see cref="ProductInterface" />
class LegacyProduct : public ProductInterface
{
public:
    void execute() override final
    {
        std::cout << "Legacy product." << std::endl;
    }
};

#endif
