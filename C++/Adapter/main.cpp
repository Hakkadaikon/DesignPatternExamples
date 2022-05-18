//-----------------------------------------------------------------------------
// File        : main.cpp
// Description : Entry point.
// Author      : hakkadaikon
//-----------------------------------------------------------------------------
#include <iostream>
#include "product_adapter.hpp"

int main(void)
{
    // Let's change the "kind" variable!
    // std::string kind = "other";
    // std::string kind = "legacy_product";
    std::string kind = "product";

    try 
    {
        ProductAdapter product(kind);
        product.execute();
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}