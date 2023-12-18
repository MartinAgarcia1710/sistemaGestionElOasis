#include <iostream>
#include <string.h>
#include <cstring>
#include <ctime>
#include "globales.h"
#include "Articulo.h"
#include "ArchivoArticulo.h"
#include "fecha.h"

int main(){
    Articulo a;
    ArchivoArticulo arcA("articulos.dat");
    Fecha f;
    f.Cargar();
    a.cargar();
    std::cout << std::endl;
    f.Mostrar();
    std::cout << std::endl;
    a.mostrar();
    return 0;
}
