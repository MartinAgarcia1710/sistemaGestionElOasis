#include "ArchivoArticulo.h"
#include <iostream>
#include <string.h>
#include <cstring>
#include "Articulo.h"

ArchivoArticulo::ArchivoArticulo(const char *n){
    strcpy(nombre, n);
}
Articulo ArchivoArticulo::leerRegistro(int pos){
    Articulo reg;
    FILE *p = fopen(nombre,"rb");
    if(p == NULL){
        return reg;
    }
    fseek(p, pos * sizeof reg, 0);
    fread(&reg, sizeof reg, 1, p);
    fclose(p);
    return reg;
}

int ArchivoArticulo::contarRegistros(){
    FILE *p = fopen(nombre,"rb");
    if(p == NULL){
        return -1;
    }
    fseek(p, 0, 2);
    int cant = ftell(p) / sizeof(Articulo);
    fclose(p);
    return cant;
}
bool ArchivoArticulo::grabarRegistro(Articulo reg){
    FILE *p;
    p = fopen(nombre, "ab");
    if(p == NULL){
        return false;
    }
    int escribio = fwrite(&reg, sizeof reg,1, p);
    fclose(p);
    return escribio;
}
int ArchivoArticulo::buscarPorNombre(){
    char nombre[30];
    Articulo reg;
    FILE *p;
    int posicion = 0;
    int posReg;
    bool existe=false;
    p = fopen("articulos.dat","rb");
    if(p == NULL){
        std::cout << "ERROR DE ARCHIVO\n";
        return -1;
    }
    std::cout << "INGRESAR ARTICULO A BUSCAR \n";
    std::cin >> nombre;
    while(fread(&reg, sizeof(Articulo), 1, p) == 1){
        if(strcmp(reg.getNombre(), nombre) == 0){
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
bool ArchivoArticulo::bajaLogica(Articulo reg, int posicion){
    FILE *p;
    p = fopen(nombre, "rb+"); ///cambie "articulos.dat" por nombre... a ver si funciona
    if(p == NULL){
        std::cout << "ERROR DE ARCHIVO\n";
        return false;
    }
    reg.setEstado(false);
    fseek(p, sizeof(Articulo) * posicion, 0);
    bool baja = fwrite(&reg, sizeof(Articulo), 1, p);
    fclose(p);
    return baja;

 }
bool ArchivoArticulo::sobreEscribirRegistro(Articulo reg, int pos){
    FILE *p;
    p = fopen("articulos.dat", "rb+");
    if(p == NULL){
            std::cout << "ERROR DE ARCHIVO\n";
        return false;
    }
    fseek(p, sizeof reg*pos, 0);
    bool escribio = fwrite(&reg, sizeof reg, 1, p);
    fclose(p);
    return escribio;
}
bool ArchivoArticulo::bajaFisica(){
    ArchivoArticulo arcA("articulos.dat");
    Articulo a;
    int cantidadRegistros = arcA.contarRegistros();
    FILE *pb;
    FILE *p;
    p = fopen("articulos.bak", "wb");
    if(p == NULL){
        return false;
    }
    for(int x = 0; x < cantidadRegistros; x++){
        a = arcA.leerRegistro(x);
        fwrite(&a, sizeof a, 1, p);
    }

    fclose(p);
    pb = fopen("articulos.bak","rb");
    if(pb == NULL){
        return false;
    }
    p = fopen("articulos.dat","wb");
    if(p == NULL){
        fclose(pb);
        return false;
    }
    while(fread(&a, sizeof a, 1, pb) == 1){
        if(a.getEstado() == true){
            fwrite(&a, sizeof a, 1, p);
        }
    }
    fclose(pb);
    fclose(p);
}
