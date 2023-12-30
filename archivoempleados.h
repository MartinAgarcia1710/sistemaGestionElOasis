#ifndef ARCHIVOEMPLEADOS_H_INCLUDED
#define ARCHIVOEMPLEADOS_H_INCLUDED
#include "empleado.h"

class ArchivoEmpleado{
    private:
        char nombre[30];
    public:
        ArchivoEmpleado(const char *n);
        Empleado leerRegistro(int pos);
        int contarRegistros();
        bool grabarRegistro(Empleado reg);
        int buscarPorNombre();
        bool bajaLogica(Empleado reg, int posicion);
        bool sobreEscribirRegistro(Empleado reg, int pos);
        bool bajaFisica();
};


#endif // ARCHIVOEMPLEADOS_H_INCLUDED
