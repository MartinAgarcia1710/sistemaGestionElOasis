#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED
#include "persona.h"

class Empleado: public Persona{
    private:
        char numeroEmpleado[5];
        Fecha fechaIngreso;
        float valorHoraTrabajada;
    public:
        void mostrar();
        void cargar();
        void setNumeroEmpleado(const char* ne);
        void setFechaIngreso(Fecha fi);
        void setValorHoraTrabajada(float vh);

        const char* getNumeroEmpleado();
        Fecha getFechaIngreso();
        float getValorHoraTrabajada();

};


#endif // EMPLEADO_H_INCLUDED
