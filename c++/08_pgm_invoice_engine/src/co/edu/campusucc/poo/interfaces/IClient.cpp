#ifndef ICLIENT_H
#define ICLIENT_H

class IClient {
public:
    virtual void nombre() = 0;
    virtual void apellido() = 0;
    virtual void tipoTarjeta() = 0;
    virtual void numTarjeta() = 0;
};

#endif

