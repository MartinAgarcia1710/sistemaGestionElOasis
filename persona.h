#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED
#include "direcion.h"

class Persona{
    protected:
        char nombreYapellido[70];
        char numeroTelefono[10];
        char cuil[15];
        char email[30];
        Fecha nacimiento;
        Direccion domicilio;


    public:



};


#endif // PERSONA_H_INCLUDED
