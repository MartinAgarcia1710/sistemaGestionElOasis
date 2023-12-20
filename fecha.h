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
    int getDia();
    int getMes();
    int getAnio();
    int getHora();
    int getMinutos();

    void setDia(int d);
    void setMes(int m);
    void setAnio(int a);


};

#endif // FECHA_H_INCLUDED
