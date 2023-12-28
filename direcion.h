#ifndef DIRECION_H_INCLUDED
#define DIRECION_H_INCLUDED

class Direccion{
    private:
        char calle[50];
        char altura[6];
        char localidad[30];
        char provincia[30];
        char pais[50];
    public:
        void cargar();
        void mostrarDIreccion();

};

#endif // DIRECION_H_INCLUDED
