#include <iostream>
#include <cstring>
#include "empleado.h"
#include "globales.h"
#include "rlutil.h"

void Empleado::cargar(){

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
    std::cout << "INGRESE FECHA DE ALTA DEL EMPLEADO\n";
    fechaIngreso.Cargar();
    std::cout << "INGRESE NUMERO DE EMPLEADO\n";
    cargarCadena(numeroEmpleado, 4);
    std::cout << "INGRESE EL VALOR DE LA HORA TRABAJADA\n";
    std::cin >> valorHoraTrabajada;
    estado = true;

}
void Empleado::mostrar(){
    std::cout << "Numero de Empleado: " << numeroEmpleado << "\n";
    std::cout << "Nombre: " << nombreYapellido << "\n";
    std::cout << "Numero de Telefono: " << numeroTelefono << "\n";
    std::cout << "DNI: " << DNI << "\n";
    std::cout << "CUIL: " << cuil << "\n";
    std::cout << "CORREO ELECTRONICO: " << email << "\n";
    std::cout << "FECHA DE NACIMIENTO: ";
    nacimiento.Mostrar();
    domicilio.mostrarDIreccion();
    std::cout << "FECHA DE INGRESO: ";
    fechaIngreso.Mostrar();
    std::cout << "VALOR DE LA HORA TRABAJADA: $" << valorHoraTrabajada << "\n";
    std::cout << "Estado: " << estado << "\n";
}

void Empleado::setNumeroEmpleado(const char* ne){
    strcpy(numeroEmpleado, ne);
}
void Empleado::setFechaIngreso(Fecha fi){
    fechaIngreso = fi;
}
void Empleado::setValorHoraTrabajada(float vh){
    valorHoraTrabajada = vh;
}

const char* Empleado::getNumeroEmpleado(){
    return numeroEmpleado;
}
Fecha Empleado::getFechaIngreso(){
    return fechaIngreso;
}
float Empleado::getValorHoraTrabajada(){
    return valorHoraTrabajada;
}
