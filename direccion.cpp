#include <iostream>
#include <string.h>
#include <cstring>
#include "direcion.h"
#include "globales.h"

void Direccion::cargar(){
    std::cout << "INGRESAR CALLE\n";
    cargarCadena(calle, 49);
    std::cout << "INGRESAR ALTURA\n";
    cargarCadena(altura, 5);
    std::cout << "INGRESAR LOCALIDAD\n";
    cargarCadena(localidad, 29);
    std::cout << "INGRESAR PROVINCIA\n";
    cargarCadena(provincia, 29);
    std::cout << "INGRESAR PAIS\n";
    cargarCadena(pais, 49);
}

void Direccion::mostrarDIreccion(){

    std::cout << "DIRECCION: " << calle << " " << altura << ", ";
    std::cout << localidad << ", " << provincia << ". " << pais << std::endl;

}
