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
