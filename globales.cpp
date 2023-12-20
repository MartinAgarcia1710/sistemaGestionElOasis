#include <iostream>
#include <string.h>
#include <cstring>
#include "globales.h"
#include "rlutil.h"
#include "funcionesImpresion.h"
#include "Articulo.h"
#include "ArchivoArticulo.h"
#include "fecha.h"
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
    //bool baja;
    //int porcentaje;
    //int posBaja;
    int movimientoCursorY = 0;
    //int contadorCarga = 0;
    //int continuar = 1;
    //Articulo a;
    ArchivoArticulo arcA("articulos.dat");
    //int cantidadArticulos;
    //char nombre[30];
    //char confirmacion;
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
        std::cout << (char)186;// << "     CARGAR ARTICULOS    ";
        rlutil::locate(76, 13);
        std::cout << (char)186;
        rlutil::locate(50, 14);
        std::cout << (char)186; // << "   MODIFICAR ARTICULOS   ";
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

        remarcarOpcion("     CARGAR ARTICULOS    ", 51, 13, movimientoCursorY == 0, 5 + 1);
        remarcarOpcion("   MODIFICAR ARTICULOS   ", 51, 14, movimientoCursorY == 1, 5 + 1);
        remarcarOpcion(" BAJA LOGICA DE ARTICULO ", 51, 15, movimientoCursorY == 2, 5 + 1);
        remarcarOpcion(" BAJA FISICA DE ARTICULO ", 51, 16, movimientoCursorY == 3, 5 + 1);
        remarcarOpcion("     LISTAR ARTICULOS    ", 51, 17, movimientoCursorY == 4, 5 + 1);
        remarcarOpcion("          VOLVER         ", 51, 18, movimientoCursorY == 5, 5 + 1);

        int cursor = rlutil::getkey();
        //rlutil::setBackgroundColor(0);
        switch (cursor) {
        case 14:
        movimientoCursorY--;
            if (movimientoCursorY <= 0) {
                movimientoCursorY = 0;
            }
            break;
        case 15:
            movimientoCursorY++;
            if (movimientoCursorY >= 5) {
                movimientoCursorY = 5;
                //rlutil::setBackgroundColor(0);
            }
            break;
        case 1:
            switch (movimientoCursorY) {
                case 0:
                    system("cls");
                    cargaDeArticulos();

                    break;
                case 1:
                    system("cls");
                    modificacionDeArticulos();
                    system("pause");
                    break;
                case 2:
                    system("cls");
                    bajaLogicaDeArticulo();
                    system("pause");

                    break;
                case 3:
                    system("cls");
                    arcA.bajaFisica();
                    system("pause");
                    break;
                case 4:
                    system("cls");
                    listarArticulos();
                    system("pause");

                    break;
                case 5:
                    return;
                    break;
            }
            break;
        }
    }

}
void membrete(){
    Fecha act;
    rlutil::locate(1, 1);
    std::cout << (char)201;
    for(int x = 0; x < 118; x++){
        rlutil::locate(2 + x, 1);
        std::cout << (char)205;
        rlutil::locate(2 + x, 3);
        std::cout << (char)205;
    }
    rlutil::locate(120, 1);
    std::cout << (char)187;
    rlutil::locate(1, 3);
    std::cout << (char)200;
    rlutil::locate(120, 3);
    std::cout << (char)188;
    rlutil::locate(1, 2);
    std::cout << (char)186;
    rlutil::locate(120, 2);
    std::cout << (char)186;

    rlutil::locate(2, 2);
    std::cout << "GESTION COMERCIAL EL OASIS";
    rlutil::locate(90, 2);
    std::cout << "Fecha: " << act.getDia() << "/" << act.getMes() << "/" << act.getAnio();
    rlutil::locate(109, 2);
    std::cout << "Hora: " << act.getHora() << ":" << act.getMinutos();

}

void cargaDeArticulos(){
    Articulo a;
    ArchivoArticulo arcA("articulos.dat");
    int continuar = 1;
    membrete();
    rlutil::locate(50, 5);
    std::cout << "CARGA DE ARTICULOS \n";
    while(continuar == 1){
        a.cargar();
        arcA.grabarRegistro(a);

        std::cout << "PRESIONE 1 PARA SEGUIR CARGANDO O 2 PARA VOLVER\n";
        std::cin >> continuar;

    }

}
void modificacionDeArticulos(){
    Articulo a;
    ArchivoArticulo arcA("articulos.dat");
    int pos = arcA.buscarPorNombre();
    bool validacion = false;
    membrete();
    rlutil::locate(50, 5);
    std::cout << "MODIFICACION DE ARTICULOS \n";

    if(pos >= 0){ //= arcA.buscarPorNombre() >= 0){
        validacion = true;
    }
        if(validacion){
            a.cargar();
            arcA.sobreEscribirRegistro(a, pos);
            std::cout << "REGISTRO MODIFICADO\n";
    }else{
        std::cout << "ERROR";
    }


}

void bajaLogicaDeArticulo(){
    Articulo a;
    ArchivoArticulo arcA("articulos.dat");
    int posBaja = arcA.buscarPorNombre();
    a = arcA.leerRegistro(posBaja);
    bool baja = arcA.bajaLogica(a, posBaja);
    if(baja){
        std::cout << "ARTICULO DADO DE BAJA LOGICA\n";
    }else{
        std::cout << "ERROR\n";
    }
}
void listarArticulos(){
    ArchivoArticulo arcA("articulos.dat");
    Articulo a;
    int cantidadArticulos = arcA.contarRegistros();
    for(int x = 0; x < cantidadArticulos; x++){
        a = arcA.leerRegistro(x);
        a.mostrar();
        std::cout << "-----------------------------\n";
        }

}
void cargarVentas(){


}
