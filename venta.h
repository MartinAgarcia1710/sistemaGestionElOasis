#ifndef VENTA_H_INCLUDED
#define VENTA_H_INCLUDED
#include "fecha.h"
class Venta{
    private:
        int numeroVenta;
        char detalleVenta[50][30] = {};
        float montoTotal;
        Fecha fechaCompra;


    public:


        void setNumeroVenta(int nv);
        void setFechaCompra();
        void setCodigoArticulo(const char* cod);

        int getNumeroventa();
        float getMontoTotal();
        Fecha getFechaCompra();
        const char* getCodigoArticulo();
};


#endif // VENTA_H_INCLUDED
