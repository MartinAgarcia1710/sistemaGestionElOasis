#include <iostream>
#include <string.h>
#include <cstring>
#include "Articulo.h"
#include "globales.h"

void Articulo::mostrar(){
    std::cout << "Nombre: " << nombre << "\n";
    std::cout << "Descripcion: " << descripcion << "\n";
    std::cout << "Codigo: " << codigo << "\n";
    std::cout << "Precio al publico: $" << precioPublico << "\n";
    std::cout << "Precio de costo: $" << precioCosto << "\n";
    std::cout << "Estado: " << estado << "\n";
}
void Articulo::cargar(){
    std::cout << "Ingresar nombre del articulo: \n";
    cargarCadena(nombre, 29);
    std::cout << "Ingresar descripcion: \n";
    cargarCadena(descripcion, 99);
    std::cout << "Ingresar codigo del articulo: \n";
    cargarCadena(codigo, 4);
    std::cout << "Ingresar precio al publico: \n";
    std::cin >> precioPublico;
    std::cout << "Ingresar precio de costo: \n";
    std::cin >> precioCosto;
    estado = true;


}
void Articulo::setNombre(const char *nom){
    strcpy(nombre, nom);

}
void Articulo::setDescripcion(const char *desc){
    strcpy(descripcion, desc);
}
void Articulo::setCodigo(const char *cod){
    strcpy(codigo, cod);
}
void Articulo::setPrecioPublico(float pp){
    precioPublico = pp;
}
void Articulo::setPrecioCosto(float pc){
    precioCosto = pc;
}
void Articulo::setEstado(bool est){
    estado = est;
}

const char* Articulo::getNombre(){
    return nombre;
}
const char* Articulo::getDescripcion(){
    return descripcion;
}
const char* Articulo::getCodigo(){
    return codigo;
}
float Articulo::getPrecioPublico(){
    return precioPublico;
}
float Articulo::getPrecioCosto(){
    return precioCosto;
}
bool Articulo::getEstado(){
    return estado;
}
