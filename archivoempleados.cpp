#include "Archivoempleados.h"
#include <iostream>
#include <string.h>
#include <cstring>
#include "empleado.h"

ArchivoEmpleado::ArchivoEmpleado(const char *n){
    strcpy(nombre , n);
}
Empleado ArchivoEmpleado::leerRegistro(int pos){
    Empleado reg;
    FILE *p = fopen(nombre,"rb");
    if(p == NULL){
        return reg;
    }
    fseek(p, pos * sizeof reg, 0);
    fread(&reg, sizeof reg, 1, p);
    fclose(p);
    return reg;
}

int ArchivoEmpleado::contarRegistros(){
    FILE *p = fopen(nombre,"rb");
    if(p == NULL){
        return -1;
    }
    fseek(p, 0, 2);
    int cant = ftell(p) / sizeof(Empleado);
    fclose(p);
    return cant;
}
bool ArchivoEmpleado::grabarRegistro(Empleado reg){
    FILE *p;
    p = fopen(nombre, "ab");
    if(p == NULL){
        return false;
    }
    int escribio = fwrite(&reg, sizeof reg,1, p);
    fclose(p);
    return escribio;
}
int ArchivoEmpleado::buscarPorNombre(){
    char nombre[30];
    Empleado reg;
    FILE *p;
    int posicion = 0;
    int posReg;
    bool existe=false;
    p = fopen("empleados.dat","rb");
    if(p == NULL){
        std::cout << "ERROR DE ARCHIVO\n";
        return -1;
    }
    std::cout << "INGRESAR EMPLEADO A BUSCAR \n";
    std::cin >> nombre;
    while(fread(&reg, sizeof(Empleado), 1, p) == 1){
        if(strcmp(reg.getNombreYapellido() , nombre) == 0){
            reg.mostrar();
            existe = true;
            posReg = posicion;
        }
        posicion++;
    }
    fclose(p);
    if(existe == false){
        std::cout << "NO HAY REGISTROS CON ESE NOMBRE\n";
        return -1;
    }
    return posReg;
}
bool ArchivoEmpleado::bajaLogica(Empleado reg, int posicion){
    FILE *p;
    p = fopen(nombre, "rb+"); ///cambie "articulos.dat" por nombre... a ver si funciona
    if(p == NULL){
        std::cout << "ERROR DE ARCHIVO\n";
        return false;
    }
    reg.setEstado(false);
    fseek(p, sizeof(Empleado) * posicion, 0);
    bool baja = fwrite(&reg, sizeof(Empleado), 1, p);
    fclose(p);
    return baja;

 }
bool ArchivoEmpleado::sobreEscribirRegistro(Empleado reg, int pos){
    FILE *p;
    p = fopen("empleados.dat", "rb+");
    if(p == NULL){
            std::cout << "ERROR DE ARCHIVO\n";
        return false;
    }
    fseek(p, sizeof reg*pos, 0);
    bool escribio = fwrite(&reg, sizeof reg, 1, p);
    fclose(p);
    return escribio;
}
bool ArchivoEmpleado::bajaFisica(){
    ArchivoEmpleado arcE("empleados.dat");
    Empleado e;
    int cantidadRegistros = arcE.contarRegistros();
    FILE *pb;
    FILE *p;
    p = fopen("empleados.bak", "wb");
    if(p == NULL){
        return false;
    }
    for(int x = 0; x < cantidadRegistros; x++){
        e = arcE.leerRegistro(x);
        fwrite(&e, sizeof e, 1, p);
    }

    fclose(p);
    pb = fopen("empleados.bak","rb");
    if(pb == NULL){
        return false;
    }
    p = fopen("empleados.dat","wb");
    if(p == NULL){
        fclose(pb);
        return false;
    }
    while(fread(&e, sizeof e, 1, pb) == 1){
        if(e.getEstado() == true){
            fwrite(&e, sizeof e, 1, p);
        }
    }
    fclose(pb);
    fclose(p);
}
