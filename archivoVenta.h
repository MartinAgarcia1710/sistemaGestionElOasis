#ifndef ARCHIVOVENTA_H_INCLUDED
#define ARCHIVOVENTA_H_INCLUDED
class ArchivoVenta{
    private:
        char nombre[30];
    public:
        ArchivoVenta(const char *n);
        Venta leerRegistro(int pos);
        int contarRegistros();
        bool grabarRegistro(Venta reg);
        int buscarPorNombre();
        bool bajaLogica(Venta reg, int posicion);
        bool sobreEscribirRegistro(Venta reg, int pos);
        bool bajaFisica();
};


#endif // ARCHIVOVENTA_H_INCLUDED
