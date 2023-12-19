#ifndef ARCHIVOARTICULO_H_INCLUDED
#define ARCHIVOARTICULO_H_INCLUDED
#include "Articulo.h"
class ArchivoArticulo{
    private:
        char nombre[30];
    public:
        ArchivoArticulo(const char *n);
        Articulo leerRegistro(int pos);
        int contarRegistros();
        bool grabarRegistro(Articulo reg);
        int buscarPorNombre();
        bool bajaLogica(Articulo reg, int posicion);
};

#endif // ARCHIVOARTICULO_H_INCLUDED
