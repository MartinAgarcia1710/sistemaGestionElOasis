#include <iostream>
#include <cstring>
#include "cliente.h"
#include "globales.h"
#include "rlutil.h"

void Cliente::setNumeroCliente(const char* num){
    strcpy(numeroCliente, num);
}
const char* Cliente::getNumeroCliente(){
    return numeroCliente;
}

void Cliente::cargar(){
    std::cout << "INGRESAR NOMBRE DEL CLIENTE\n";
    cargarCadena(nombreYapellido, 69);
    std::cout << "INGRESAR NUMERO DE TELEFONO\n";
    cargarCadena(numeroTelefono, 9);
    std::cout << "INGRESAR DNI\n";
    cargarCadena(DNI, 14);
    std::cout << "INGRESAR CUIL\n";
    cargarCadena(cuil, 14);
    std::cout << "INGRESAR CORREO ELECTRONICO\n";
    cargarCadena(email, 29);
    std::cout << "INGRESAR FECHA DE NACIMIENTO\n";
    nacimiento.Cargar();
    std::cout << "INGRESAR DIRECCION\n";
    domicilio.cargar();
    std::cout << "INGRESE FECHA DE ALTA DEL CLIENTE\n";
    ingreso.Cargar();
    std::cout << "INGRESE NUMERO DE CLIENTE\n";
    cargarCadena(numeroCliente, 9);
    estado = true;


}
void Cliente::mostrar(){
    rlutil::locate(33, 10);
    std::cout << "Numero de Cliente: " << numeroCliente << "\n";
    rlutil::locate(33, 11);
    std::cout << "Nombre: " << nombreYapellido << "\n";
    rlutil::locate(33, 12);
    std::cout << "Numero de Telefono: " << numeroTelefono << "\n";
    rlutil::locate(33, 13);
    std::cout << "DNI: " << DNI << "\n";
    rlutil::locate(33, 14);
    std::cout << "CUIL: " << cuil << "\n";
    rlutil::locate(33, 15);
    std::cout << "CORREO ELECTRONICO: " << email << "\n";
    rlutil::locate(33, 16);
    std::cout << "FECHA DE NACIMIENTO: ";

    nacimiento.Mostrar();
    rlutil::locate(33, 17);
    domicilio.mostrarDIreccion();
    rlutil::locate(33, 18);
    std::cout << "FECHA DE INGRESO: ";
    ingreso.Mostrar();
    rlutil::locate(33, 19);
    std::cout << "Estado: " << estado << "\n";
}
