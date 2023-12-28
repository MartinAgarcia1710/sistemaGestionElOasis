#include <iostream>
#include <string.h>
#include <cstring>
#include <ctime>
#include "fecha.h"

Fecha::Fecha(){
    time_t marcaTiempo;
    marcaTiempo = time(NULL);
    struct tm *fechaActual;
    fechaActual = localtime(&marcaTiempo);
    dia = fechaActual->tm_mday;
    mes = fechaActual->tm_mon + 1;
    anio = fechaActual->tm_year + 1900;
    hora = fechaActual->tm_hour;
    minutos = fechaActual->tm_min;

}
void Fecha::Cargar(){
    std::cout << "Ingrese dia: \n";
    std::cin >> dia;
    std::cout << "Ingrese mes: \n";
    std::cin >> mes;
    std::cout << "Ingrese anio: \n";
    std::cin >> anio;
}
void Fecha::Mostrar(){
    std::cout << dia << "/";
    std::cout << mes << "/";
    std::cout << anio << "\n";
}
void Fecha::MostrarHora(){
    std::cout << hora << ":" << minutos;

}
int Fecha::getDia(){
    return dia;
}
int Fecha::getMes(){
    return mes;
}
int Fecha::getAnio(){
    return anio;
}

int Fecha::getHora(){
    return hora;
}

int Fecha::getMinutos(){
    return minutos;
}

void Fecha::setDia(int d){
    dia=d;
}
void Fecha::setMes(int m){
    mes=m;
}
void Fecha::setAnio(int a){
    anio=a;
}
void Fecha::setHora(int h){
    hora = h;
}
void Fecha::setMinutos(int mi){
    minutos = mi;
}
