#include <iostream>
#include "cliente.h"
#include <cstring>
#include "globales.h"

void Cliente::setNombreYapellido(const char* nom){
    strcpy(nombreYapellido, nom);
}
void Cliente::setNumeroCliente(int nc){
    numeroCliente = nc;
}
void Cliente::setNumeroTelefono(int nt){
    numeroTelefono = nt;
}
void Cliente::setCuil(int ncu){
    cuil = ncu;
}

const char* Cliente::getNombreYapellido(){
    return nombreYapellido;
}
int Cliente::getNumeroCliente(){
    return numeroCliente;
}
int Cliente::getNumeroTelefono(){
    return numeroTelefono;
}
int Cliente::getCuil(){
    return cuil;
}
void Cliente::cargar(){
    std::cout << "Ingresar nombre y apellido: \n";
    cargarCadena(nombreYapellido, 69);
    std::cout << "Ingresar Numero de Cliente: \n";
    std::cin >> numeroCliente;
    std::cout << "Ingresar numero de telefono: \n";
    std::cin >> numeroTelefono;
    std::cout << "Ingresar CUIL: \n";
    std::cin >> cuil;
    estado = true;
}
void Cliente::mostrar(){
    std::cout << "Nombre: " << nombreYapellido << "\n";
    std::cout << "Numero de Cliente: " << numeroCliente << "\n";
    std::cout << "Numero de Telefono: " << numeroTelefono << "\n";
    std::cout << "CUIL: " << cuil << "\n";
    std::cout << "Estado: " << estado << "\n";
}
