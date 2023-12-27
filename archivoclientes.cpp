#include <iostream>
#include <string.h>
#include <cstring>
#include "cliente.h"
#include "archivoclientes.h"

ArchivoClientes::ArchivoClientes(const char *n){
    strcpy(nombre, n);
}
Cliente ArchivoClientes::leerRegistro(int pos){
    Cliente reg;
    FILE *p = fopen(nombre,"rb");
    if(p == NULL){
        return reg;
    }
    fseek(p, pos * sizeof reg, 0);
    fread(&reg, sizeof reg, 1, p);
    fclose(p);
    return reg;
}

int ArchivoClientes::contarRegistros(){
    FILE *p = fopen(nombre,"rb");
    if(p == NULL){
        return -1;
    }
    fseek(p, 0, 2);
    int cant = ftell(p) / sizeof(Cliente);
    fclose(p);
    return cant;
}
bool ArchivoClientes::grabarRegistro(Cliente reg){
    FILE *p;
    p = fopen(nombre, "ab");
    if(p == NULL){
        return false;
    }
    int escribio = fwrite(&reg, sizeof reg,1, p);
    fclose(p);
    return escribio;
}
int ArchivoClientes::buscarPorNombre(){
    char nombre[30];
    Cliente reg;
    FILE *p;
    int posicion = 0;
    int posReg;
    bool existe=false;
    p = fopen("clientes.dat","rb");
    if(p == NULL){
        std::cout << "ERROR DE ARCHIVO\n";
        return -1;
    }
    std::cout << "INGRESAR CLIENTE A BUSCAR \n";
    std::cin >> nombre;
    while(fread(&reg, sizeof(Cliente), 1, p) == 1){
        if(strcmp(reg.getNombreYapellido(), nombre) == 0){
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
bool ArchivoClientes::bajaLogica(Cliente reg, int posicion){
    FILE *p;
    p = fopen(nombre, "rb+"); ///cambie "articulos.dat" por nombre... a ver si funciona
    if(p == NULL){
        std::cout << "ERROR DE ARCHIVO\n";
        return false;
    }
    reg.setEstado(false);
    fseek(p, sizeof(Cliente) * posicion, 0);
    bool baja = fwrite(&reg, sizeof(Cliente), 1, p);
    fclose(p);
    return baja;

 }
bool ArchivoClientes::sobreEscribirRegistro(Cliente reg, int pos){
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
bool ArchivoClientes::bajaFisica(){
    ArchivoClientes arcC("clientes.dat");
    Cliente c;
    int cantidadRegistros = arcC.contarRegistros();
    FILE *pb;
    FILE *p;
    p = fopen("clientes.bak", "wb");
    if(p == NULL){
        return false;
    }
    for(int x = 0; x < cantidadRegistros; x++){
        c = arcC.leerRegistro(x);
        fwrite(&c, sizeof c, 1, p);
    }

    fclose(p);
    pb = fopen("clientes.bak","rb");
    if(pb == NULL){
        return false;
    }
    p = fopen("clientes.dat","wb");
    if(p == NULL){
        fclose(pb);
        return false;
    }
    while(fread(&c, sizeof c, 1, pb) == 1){
        if(c.getEstado() == true){
            fwrite(&c, sizeof c, 1, p);
        }
    }
    fclose(pb);
    fclose(p);
}
