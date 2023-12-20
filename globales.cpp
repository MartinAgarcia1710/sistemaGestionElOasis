#include <iostream>
#include <string.h>
#include <cstring>
#include "globales.h"
#include "rlutil.h"
#include "funcionesImpresion.h"
#include "Articulo.h"
#include "ArchivoArticulo.h"
using namespace std;

void cargarCadena(char *pal, int tam){
    int i;
    fflush(stdin);
    for(i = 0; i < tam; i++)
    {
        pal[i] = cin.get();
        if(pal[i] == '\n'){
            break;
        }
    }
    pal[i] = '\0';
    fflush(stdin);
}
void remarcarOpcion(const char* opcion, int posX, int posY, bool seleccion, int col) {
    if (seleccion) {
        rlutil::setBackgroundColor(col);
    }
    else {
        rlutil::setBackgroundColor(0);
    }

    rlutil::locate(posX, posY);
    std::cout << opcion << std::endl;
}

void menuArticulos(){
    bool baja;
    int porcentaje;
    int posBaja;
    int movimientoCursorY = 0;
    int contadorCarga = 0;
    int continuar = 1;
    Articulo a;
    ArchivoArticulo arcA("articulos.dat");
    int cantidadArticulos;
    char nombre[30];
    char confirmacion;
    rlutil::hidecursor();
    while (true) {
    system("cls");
    rlutil::setBackgroundColor(0);
    rlutil::locate(50, 10);
    std::cout << (char)201;
    for (int x = 0; x < 25; x++) {
        std::cout << (char)205;
    }
    std::cout << (char)187;
    rlutil::locate(50, 11);
    std::cout << (char)186;
    rlutil::setColor((rand() % 14) + 1);
    std::cout << "    MENU ARTICULOS";
    rlutil::setColor(7);
    rlutil::locate(76, 11);
    std::cout << (char)186;
    rlutil::locate(50, 12);
    std::cout << (char)204;
    rlutil::locate(51, 12);
    for (int x = 0; x < 25; x++) {
        std::cout << (char)205;
    }
    std::cout << (char)185;
    rlutil::locate(50, 13);
    std::cout << (char)186 << "      NUEVA PARTIDA      ";
    rlutil::locate(76, 13);
    std::cout << (char)186;
    rlutil::locate(50, 14);
    std::cout << (char)186 << "    REANUDAR PARTIDAS    ";
    rlutil::locate(76, 14);
    std::cout << (char)186;
    rlutil::locate(50, 15);
    std::cout << (char)186 << "      ESTADISTICAS       ";
    rlutil::locate(76, 15);
    std::cout << (char)186;
    rlutil::locate(50, 16);
    std::cout << (char)186 << "        CREDITOS!        ";
    rlutil::locate(76, 16);
    std::cout << (char)186;
    rlutil::locate(50, 17);
    std::cout << (char)186 << "          REGLAS         ";
    rlutil::locate(76, 17);
    std::cout << (char)186;
    rlutil::locate(50, 18);
    std::cout << (char)186 << "          SALIR          ";
    rlutil::locate(76, 18);
    std::cout << (char)186;
    rlutil::locate(50, 19);
    std::cout << (char)200;
    for (int x = 0; x < 25; x++) {
        std::cout << (char)205;
    }
    rlutil::locate(76, 19);
    std::cout << (char)188;

    rlutil::locate(53, 13 + movimientoCursorY);

    remarcarOpcion("     CARGAR ARTICULOS    ", 51, 13, movimientoCursorY == 0, (rand() % 14) + 1);
    remarcarOpcion("     BUSCAR ARTICULOS    ", 51, 14, movimientoCursorY == 1, (rand() % 14) + 1);
    remarcarOpcion(" BAJA LOGICA DE ARTICULO ", 51, 15, movimientoCursorY == 2, (rand() % 14) + 1);
    remarcarOpcion("     MODIFICAR PRECIOS   ", 51, 16, movimientoCursorY == 3, (rand() % 14) + 1);
    remarcarOpcion("     LISTAR ARTICULOS    ", 51, 17, movimientoCursorY == 4, (rand() % 14) + 1);
    remarcarOpcion("          VOLVER         ", 51, 18, movimientoCursorY == 5, (rand() % 14) + 1);

    int cursor = rlutil::getkey();

    switch (cursor) {
    case 14:
        movimientoCursorY--;
        if (movimientoCursorY < 0) {
            movimientoCursorY = 0;
        }
        break;
    case 15:
        movimientoCursorY++;
        if (movimientoCursorY > 5) {
            movimientoCursorY = 5;
        }
        break;
    case 1:
        switch (movimientoCursorY) {
        case 0:
            system("cls");
            std::cout << "CARGA DE ARTICULOS \n";

            while(continuar == 1){
                a.cargar();
                arcA.grabarRegistro(a);

                std::cout << "PRESIONE 1 PARA SEGUIR CARGANDO O 2 PARA VOLVER\n";
                std::cin >> continuar;
                contadorCarga++;
            }

            break;
        case 1:
            system("cls");
            cantidadArticulos = arcA.contarRegistros();
            std::cout << "INGRESE EL NOMBRE DEL ARTICULO QUE QUIERE BUSCAR\n";
            cargarCadena(nombre, 29);
            for(int x = 0; x < cantidadArticulos; x++){
                a = arcA.leerRegistro(x);
                if(strcmp(nombre, a.getNombre()) == 0){
                    std::cout << "ARTICULO SOLICITADO: \n";
                    a.mostrar();
                }
            }
            break;
        case 2:
            system("cls");
            posBaja = arcA.buscarPorNombre();
            a = arcA.leerRegistro(posBaja);
            baja = arcA.bajaLogica(a, posBaja);
            if(baja){
                std::cout << "ARTICULO DADO DE BAJA LOGICA\n";
            }else{
                std::cout << "ERROR\n";
            }
            break;
        case 3:
            system("cls");
            std::cout << "INGRESE NOMBRE DE ARTICULO QUE QUIERE MODIFICAR\n";
            cargarCadena(nombre, 29);
            cantidadArticulos = arcA.contarRegistros();
            for(int x = 0; x < cantidadArticulos; x++){
                a = arcA.leerRegistro(x);
                if(strcmp(nombre, a.getNombre()) == 0){
                    std::cout << "QUE PORCENTAJE QUIERE MODIFICAR EN EL PRECIO DE COSTO?\n";
                    std::cin >> porcentaje;
                    a.setPrecioCosto(a.getPrecioCosto() + a.getPrecioCosto() * porcentaje / 100);
                    std::cout << "QUE PORCENTAJE QUIERE MODIFICAR EN EL PRECIO AL PUBLICO?\n";
                    std::cin >> porcentaje;
                    a.setPrecioPublico(a.getPrecioPublico() + a.getPrecioPublico() * porcentaje / 100);
                    arcA.sobreEscribirRegistro(a, x);
                }
            }
            break;
        case 4:
            system("cls");
            cantidadArticulos = arcA.contarRegistros();
            for(int x = 0; x < cantidadArticulos; x++){
                a = arcA.leerRegistro(x);
                a.mostrar();
                std::cout << "-----------------------------\n";
            }
            system("pause<null");
            return;
            break;
        case 5:
            return;
            break;
        }
        break;
    }
}

}

void menuModificarPrecios(){



}
