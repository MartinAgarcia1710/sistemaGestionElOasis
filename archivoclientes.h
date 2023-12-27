#ifndef ARCHIVOCLIENTES_H_INCLUDED
#define ARCHIVOCLIENTES_H_INCLUDED
#include "cliente.h"
class ArchivoClientes{
    private:
        char nombre[30];
    public:
        ArchivoClientes(const char *n);
        Cliente leerRegistro(int pos);
        int contarRegistros();
        bool grabarRegistro(Cliente reg);
        int buscarPorNombre();
        bool bajaLogica(Cliente reg, int posicion);
        bool sobreEscribirRegistro(Cliente reg, int pos);
        bool bajaFisica();
};



#endif // ARCHIVOCLIENTES_H_INCLUDED
