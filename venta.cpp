#include <iostream>
#include <cstring>
#include <ctime>
#include "venta.h"
#include "fecha.h"
#include "globales.h"

void Venta::setNumeroVenta(int nv){
    numeroVenta = nv;
}

void Venta::setFechaCompra(){
    Fecha f;
    fechaCompra.setAnio(f.getAnio());


}

Fecha Venta::getFechaCompra(){
    fechaCompra.Mostrar();
}
