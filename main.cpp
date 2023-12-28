#include <iostream>
#include <string.h>
#include <cstring>
#include <ctime>
#include "globales.h"
#include "Articulo.h"
#include "ArchivoArticulo.h"
#include "fecha.h"
#include "rlutil.h"
#include "funcionesImpresion.h"
#include "venta.h"
#include "persona.h"
#include "cliente.h"
int main(){


    int movimientoCursorY = 0;
    rlutil::hidecursor();
    Venta v;
    membrete();
    //rlutil::locate(1, 30);
    //v.getFechaCompra();



    while (true) {
    rlutil::setBackgroundColor(0);
    rlutil::locate(50, 10);
    std::cout << (char)201;
    for (int x = 0; x < 25; x++) {
        std::cout << (char)205;
    }
    std::cout << (char)187;
    rlutil::locate(50, 11);
    std::cout << (char)186;
    rlutil::setColor(15); //((rand() % 14) + 1);
    std::cout << "    GESTION COMERCIAL";
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
    std::cout << (char)186;// << "      NUEVA PARTIDA      ";
    rlutil::locate(76, 13);
    std::cout << (char)186;
    rlutil::locate(50, 14);
    std::cout << (char)186;// << "    REANUDAR PARTIDAS    ";
    rlutil::locate(76, 14);
    std::cout << (char)186;
    rlutil::locate(50, 15);
    std::cout << (char)186;// << "      ESTADISTICAS       ";
    rlutil::locate(76, 15);
    std::cout << (char)186;
    rlutil::locate(50, 16);
    std::cout << (char)186;// << "        CREDITOS!        ";
    rlutil::locate(76, 16);
    std::cout << (char)186;
    rlutil::locate(50, 17);
    std::cout << (char)186;// << "          REGLAS         ";
    rlutil::locate(76, 17);
    std::cout << (char)186;
    rlutil::locate(50, 18);
    std::cout << (char)186;// << "          SALIR          ";
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

    remarcarOpcion("      MENU ARTICULOS     ", 51, 13, movimientoCursorY == 0, 3);
    remarcarOpcion("      CARGAR VENTAS      ", 51, 14, movimientoCursorY == 1, 3);
    remarcarOpcion("         CLIENTES        ", 51, 15, movimientoCursorY == 2, 3);
    remarcarOpcion("       PROVEEDORES       ", 51, 16, movimientoCursorY == 3, 3);
    remarcarOpcion("           INFO          ", 51, 17, movimientoCursorY == 4, 3);
    remarcarOpcion("          SALIR          ", 51, 18, movimientoCursorY == 5, 3);

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
            menuArticulos();
            break;
        case 1:
            system("cls");
            cargarVentas();
            break;
        case 2:
            system("cls");
            menuClientes();

            break;
        case 3:

            break;
        case 4:

            break;
        case 5:
            return false;
            break;
        }
        break;
    }
}














    /*Articulo a;
    ArchivoArticulo arcA("articulos.dat");
    Fecha f;
    f.Cargar();
    a.cargar();
    std::cout << std::endl;
    f.Mostrar();
    std::cout << std::endl;
    a.mostrar();
    */
    return 0;
}
