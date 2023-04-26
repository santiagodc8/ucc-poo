#pragma once

class IProducts {
public:
    virtual void nombreProducto() = 0;
    virtual void precio() = 0;
    virtual ~IProducts() {}
};
