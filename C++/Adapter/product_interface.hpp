//-----------------------------------------------------------------------------
// File        : ProductInterface.hpp
// Description : This interface provides product behavior.
// Author      : hakkadaikon
//-----------------------------------------------------------------------------
#ifndef _PRODUCT_INTERFACE_HPP_
#define _PRODUCT_INTERFACE_HPP_

/// <summary>
/// This interface provides product behavior.
/// </summary>
class ProductInterface
{
public:
    /// <summary>
    /// Virtual destructor.
    /// </summary>
    virtual ~ProductInterface(){}

    /// <summary>
    /// Provides product behavior.
    /// </summary>
    virtual void execute() = 0;
};

#endif