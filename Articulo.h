#ifndef ARTICULO_H_INCLUDED
#define ARTICULO_H_INCLUDED
#include "globales.h"
class Articulo{
    private:
        char nombre[50];
        char descripcion[100];
        char codigo[5];
        float precioPublico;
        float precioCosto;
        bool estado;

    public:
        void mostrar();
        void cargar();
        void setNombre(const char* nom);
        void setDescripcion(const char* desc);
        void setCodigo(const char* cod);
        void setPrecioPublico(float pp);
        void setPrecioCosto(float pc);
        void setEstado(bool est);

        const char* getNombre();
        const char* getDescripcion();
        const char* getCodigo();
        float getPrecioPublico();
        float getPrecioCosto();
        bool getEstado();
};


#endif // ARTICULO_H_INCLUDED
