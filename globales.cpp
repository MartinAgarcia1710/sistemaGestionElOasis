#include <iostream>
#include <string.h>
#include <cstring>
#include "globales.h"
#include "rlutil.h"
#include "funcionesImpresion.h"
#include "Articulo.h"
#include "ArchivoArticulo.h"
#include "fecha.h"
#include "cliente.h"
#include "archivoclientes.h"
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

    int movimientoCursorY = 0;
    ArchivoArticulo arcA("articulos.dat");
    rlutil::hidecursor();
    membrete();

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
                    //53
        rlutil::locate(51, 13 + movimientoCursorY);

        remarcarOpcion("     CARGAR ARTICULOS    ", 51, 13, movimientoCursorY == 0, 5);
        remarcarOpcion("   MODIFICAR ARTICULOS   ", 51, 14, movimientoCursorY == 1, 5);
        remarcarOpcion(" BAJA LOGICA DE ARTICULO ", 51, 15, movimientoCursorY == 2, 5);
        remarcarOpcion(" BAJA FISICA DE ARTICULO ", 51, 16, movimientoCursorY == 3, 5);
        remarcarOpcion("     LISTAR ARTICULOS    ", 51, 17, movimientoCursorY == 4, 5);
        remarcarOpcion("          VOLVER         ", 51, 18, movimientoCursorY == 5, 5);

        int cursor = rlutil::getkey();

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
                rlutil::setBackgroundColor(0);
            }
            break;
        case 1:
            switch (movimientoCursorY) {
                case 0:
                    system("cls");
                    cargaDeArticulos();
                    system("cls");
                    system("pause>null");

                    break;
                case 1:
                    system("cls");
                    modificacionDeArticulos();
                    system("cls");
                    system("pause>null");
                    break;
                case 2:
                    system("cls");
                    bajaLogicaDeArticulo();
                    system("cls");
                    system("pause>null");

                    break;
                case 3:
                    system("cls");
                    arcA.bajaFisica();
                    system("cls");
                    system("pause>null");
                    break;
                case 4:
                    system("cls");
                    listarArticulos();
                    system("cls");
                    system("pause>null");

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
    std::cout << "Fecha: ";
    rlutil::locate(97, 2);
    act.Mostrar();
    rlutil::locate(109, 2);
    std::cout << "Hora: " << act.getHora() << ":" << act.getMinutos();
    //rlutil::locate(115, 2);
    //act.MostrarHora();
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

void menuClientes(){
    Cliente c;
    int movimientoCursorY = 0;
    membrete();
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
        std::cout << "      MENU CLIENTES";
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
        std::cout << (char)186;
        rlutil::locate(76, 13);
        std::cout << (char)186;
        rlutil::locate(50, 14);
        std::cout << (char)186;
        rlutil::locate(76, 14);
        std::cout << (char)186;
        rlutil::locate(50, 15);
        std::cout << (char)186;
        rlutil::locate(76, 15);
        std::cout << (char)186;
        rlutil::locate(50, 16);
        std::cout << (char)186;
        rlutil::locate(76, 16);
        std::cout << (char)186;
        rlutil::locate(50, 17);
        std::cout << (char)186;
        rlutil::locate(76, 17);
        std::cout << (char)186;
        rlutil::locate(50, 18);
        std::cout << (char)186;
        rlutil::locate(76, 18);
        std::cout << (char)186;
        rlutil::locate(50, 19);
        std::cout << (char)200;
        for (int x = 0; x < 25; x++) {
            std::cout << (char)205;
        }
        rlutil::locate(76, 19);
        std::cout << (char)188;
                    //53
        rlutil::locate(51, 13 + movimientoCursorY);

        remarcarOpcion("       ALTA CLIENTES     ", 51, 13, movimientoCursorY == 0, 6);
        remarcarOpcion("     LISTA DE CLIENTES   ", 51, 14, movimientoCursorY == 1, 6);
        remarcarOpcion(" BAJA LOGICA DE CLIENTES ", 51, 15, movimientoCursorY == 2, 6);
        remarcarOpcion(" BAJA FISICA DE CLIENTES ", 51, 16, movimientoCursorY == 3, 6);
        remarcarOpcion("    MODIFICAR CLIENTE    ", 51, 17, movimientoCursorY == 4, 6);
        remarcarOpcion("          VOLVER         ", 51, 18, movimientoCursorY == 5, 6);

        int cursor = rlutil::getkey();

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
                rlutil::setBackgroundColor(0);
            }
            break;
        case 1:
            switch (movimientoCursorY) {
                case 0:
                    system("cls");
                    cargarCliente();

                    break;
                case 1:
                    system("cls");
                    listarClientes();
                    system("pause>null");
                    system("cls");
                    break;
                case 2:
                    system("cls");
                    bajaLogicaCliente();
                    system("pause>null");

                    break;
                case 3:
                    system("cls");
                    bajaFisicaCliente();
                    system("cls");
                    system("pause>null");
                    break;
                case 4:
                    system("cls");
                    modificarCliente();
                    system("cls");
                    system("pause>null");
                    break;
                case 5:

                    return;
                    break;
            }
            break;
        }
    }
}
void cargarCliente(){
    ArchivoClientes arcC("clientes.dat");
    Cliente c;
    membrete();
    rlutil::locate(50, 5);
    std::cout << "ALTA DE CLIENTE \n";
    c.cargar();
    arcC.grabarRegistro(c);
}
void listarClientes(){
    ArchivoClientes arcC("clientes.dat");
    Cliente c;
    int cantidadClientes = arcC.contarRegistros();
    membrete();
    for(int x = 0; x < cantidadClientes; x++){
        c = arcC.leerRegistro(x);
        //rlutil::locate(33, 10 + x * 10);
        std::cout << "-------------------------------------------------------------------\n";
        c.mostrar();
    }
}
void bajaLogicaCliente(){
    Cliente c;
    ArchivoClientes arcC("clientes.dat");
    membrete();
    rlutil::locate(50, 5);
    std::cout << "BAJA LOGICA DE CLIENTE \n";
    int posBaja = arcC.buscarPorNombre();
    c = arcC.leerRegistro(posBaja);
    bool baja = arcC.bajaLogica(c, posBaja);
    if(baja){
        std::cout << "CLIENTE DADO DE BAJA LOGICA\n";
    }else{
        std::cout << "ERROR\n";
    }
}
void bajaFisicaCliente(){
    ArchivoClientes arcC("clientes.dat");
    char conf;
    membrete();
    rlutil::locate(50, 6);
    std::cout << "BAJA FISICA DE CLIENTES \n";
    std::cout << "ESTA SEGURO/A QUE QUIERE DAR DE BAJA FISICA TODOS LOS CLIENTES INACTIVOS?\n";
    std::cout << "TENER EN CUENTA QUE LA CONFIRMACION ELIMINARIA DE MANERA PERMANENTE DICHOS REGISTROS\n";
    std::cout << "S: SI - N: NO\n";
    std::cin >> conf;

    if(conf == 's' || conf == 'S'){
        arcC.bajaFisica();
    }else{
        return;
    }
}
void modificarCliente(){
    Cliente c;
    ArchivoClientes arcC("clientes.dat");
    membrete();
    bool validacion = false;
    membrete();
    rlutil::locate(50, 5);
    std::cout << "MODIFICACION DE CLIENTE \n";
    int pos = arcC.buscarPorNombre();
    if(pos >= 0){ //= arcA.buscarPorNombre() >= 0){
        validacion = true;
    }
        if(validacion){
            system("cls");
            c.cargar();
            arcC.sobreEscribirRegistro(c, pos);
            std::cout << "REGISTRO MODIFICADO\n";
            system("pause>null");
    }else{
        std::cout << "ERROR";
        system("pause>null");
    }
}
void menuEmpleados(){
    int movimientoCursorY = 0;
    while (true) {

        rlutil::setBackgroundColor(0);
        rlutil::locate(50, 10);
        std::cout << (char)201;
        rlutil::locate(76, 10);
        std::cout << (char)187;
        rlutil::locate(50, 19);
        std::cout << (char)200;
        rlutil::locate(76, 19);
        std::cout << (char)188;
        rlutil::locate(50, 12);
        std::cout << (char)204;
        rlutil::locate(76, 12);
        std::cout << (char)185;
        rlutil::locate(50, 11);
        std::cout << (char)186;
        rlutil::locate(76, 11);
        std::cout << (char)186;
        for(int x = 0; x < 25; x++){
            rlutil::locate(51 + x, 10);
            std::cout << (char)205;
            rlutil::locate(51 + x, 12);
            std::cout << (char)205;
            rlutil::locate(51 + x, 19);
            std::cout << (char)205;
        }
        for(int x = 0; x < 6; x++){
            rlutil::locate(50, 13 + x);
            std::cout << (char)186;
            rlutil::locate(76, 13 + x);
            std::cout << (char)186;
        }
        rlutil::locate(51, 11);
        std::cout << "      MENU EMPLEADOS";

        rlutil::locate(51, 13 + movimientoCursorY);

        remarcarOpcion("       ALTA EMPLEADO     ", 51, 13, movimientoCursorY == 0, 4);
        remarcarOpcion("    LISTA DE EMPLEADOS   ", 51, 14, movimientoCursorY == 1, 4);
        remarcarOpcion("BAJA LOGICA DE EMPLEADOS ", 51, 15, movimientoCursorY == 2, 4);
        remarcarOpcion("BAJA FISICA DE EMPLEADOS ", 51, 16, movimientoCursorY == 3, 4);
        remarcarOpcion("    MODIFICAR EMPLEADO   ", 51, 17, movimientoCursorY == 4, 4);
        remarcarOpcion("          VOLVER         ", 51, 18, movimientoCursorY == 5, 4);

        int cursor = rlutil::getkey();
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
                }
                break;
            case 1:
                switch (movimientoCursorY) {
                    case 0:
                        system("cls");
                        break;
                    case 1:
                        system("cls");

                        system("pause>null");
                        system("cls");
                        break;
                    case 2:
                        system("cls");

                        system("pause>null");

                        break;
                    case 3:
                        system("cls");

                        system("cls");
                        system("pause>null");
                        break;
                    case 4:
                        system("cls");

                        system("cls");
                        system("pause>null");
                        break;
                    case 5:
                        return;
                        break;
            }
            break;
        }
    }
}




