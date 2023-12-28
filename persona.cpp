#include <iostream>
#include <ctime>
#include <cstring>
#include "persona.h"
#include "fecha.h"
#include "direcion.h"

const char* Persona::getNombreYapellido(){
    return nombreYapellido;
}
const char* Persona::getNumeroTelefono(){
    return numeroTelefono;
}
const char* Persona::getDNI(){
    return DNI;
}
const char* Persona::getEmail(){
    return email;
}
const char* Persona::getCuil(){
    return cuil;
}
Fecha Persona::getNacimiento(){
    return nacimiento;
}
Direccion Persona::getDomicilio(){
    return domicilio;
}
bool Persona::getEstado(){
    return estado;
}

void Persona::setNombreYapellido(const char* nya){
    strcpy(nombreYapellido, nya);
}
void Persona::setNumeroTelefono(const char* nt){
    strcpy(numeroTelefono, nt);
}
void Persona::setDNI(const char* dn){
    strcpy(DNI, dn);
}
void Persona::setEmial(const char* ma){
    strcpy(email, ma);
}
void Persona::setCuil(const char* cu){
    strcpy(cuil, cu);
}
void Persona::setNacimiento(Fecha fn){
    nacimiento = fn;
}
void Persona::setDireccion(Direccion d){
    domicilio = d;
}
void Persona::setEstado(bool e){
    estado = e;
}
