#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED
#include "persona.h"
class Cliente: public Persona{
    private:
        char numeroCliente[10];
        Fecha ingreso;
    public:
        void cargar();
        void mostrar();
        void setNumeroCliente(const char* num);
        const char* getNumeroCliente();





};


#endif // CLIENTE_H_INCLUDED
