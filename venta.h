#ifndef VENTA_H_INCLUDED
#define VENTA_H_INCLUDED
#include "fecha.h"
class Venta{
    private:
        int numeroVenta;
        float montoTotal;
        Fecha fechaCompra;
        char **detalleArticulos;

    public:
        Venta();
        void setNumeroVenta(int nv);
        void setFechaCompra(Fecha f);
        void setCodigoArticulo(const char* cod);

        int getNumeroventa();
        float getMontoTotal();
        Fecha getFechaCompra();
        const char* getCodigoArticulo();
};


#endif // VENTA_H_INCLUDED
