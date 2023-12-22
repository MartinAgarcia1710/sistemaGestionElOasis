#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED


class Fecha{
private:
    int dia;
    int mes;
    int anio;
    int hora;
    int minutos;

public:
    Fecha();
    void Cargar();
    void Mostrar();
    void MostrarHora();
    int getDia();
    int getMes();
    int getAnio();
    int getHora();
    int getMinutos();

    void setDia(int d);
    void setMes(int m);
    void setAnio(int a);
    void setHora(int h);
    void setMinutos(int mi);


};

#endif // FECHA_H_INCLUDED
