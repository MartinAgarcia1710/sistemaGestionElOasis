#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED

class Cliente{
    private:
        char nombreYapellido[70];
        int numeroCliente;
        int numeroTelefono;
        int cuil;
        bool estado;

    public:
        void cargar();
        void mostrar();
        void setNombreYapellido(const char* nom);
        void setNumeroCliente(int nc);
        void setNumeroTelefono(int nt);
        void setCuil(int ncu);

        const char* getNombreYapellido();
        int getNumeroCliente();
        int getNumeroTelefono();
        int getCuil();



};


#endif // CLIENTE_H_INCLUDED
