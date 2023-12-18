#include <iostream>
#include <string.h>
#include <cstring>
#include <ctime>
#include "fecha.h"


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
    std::cout << anio <<std::endl;
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

void Fecha::setDia(int d){
    dia=d;
}
void Fecha::setMes(int m){
    mes=m;
}
void Fecha::setAnio(int a){
    anio=a;
}

