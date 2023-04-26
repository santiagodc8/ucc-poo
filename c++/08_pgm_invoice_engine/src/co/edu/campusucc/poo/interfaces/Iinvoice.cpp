#ifndef IINVOICE_H
#define IINVOICE_H

class Iinvoice {
public:
    virtual void tipo() = 0;
    virtual void total() = 0;
};

#endif // IINVOICE_H
