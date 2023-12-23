#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED
#include "direcion.h"
#include "fecha.h"
class Persona{
    protected:
        char nombreYapellido[70];
        char numeroTelefono[10];
        char DNI[15];
        char email[30];
        Fecha nacimiento;
        Direccion domicilio;
        bool estado;

    public:
        const char* getNombreYapellido();
        const char* getNumeroTelefono();
        const char* getDNI();
        const char* getEmail();
        Fecha getNacimiento();
        Direccion getDomicilio();
        bool getEstado();

        void setNombreYapellido(const char* nya);
        void setNumeroTelefono(const char* nt);
        void setDNI(const char* dn);
        void setEmial(const char* ma);
        void setNacimiento(Fecha fn);
        void setDireccion(Direccion d);
        void setEstado(bool e);
};


#endif // PERSONA_H_INCLUDED
