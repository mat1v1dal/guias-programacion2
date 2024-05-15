#include<iostream>
#include<string>
#include "class.h"
using namespace std;


string Repartidor::toString(){
    string newRepartidoString = Empleado::toString() + "\nZona: " + to_string(Zona);
    return newRepartidoString;
}

void Repartidor::aumentarSalario(){
    if(Zona == 3 && getEdad() > 25){
        setSalario(getSalario() + 3000);
    }
}
string Comercial::toString(){
    string newComercialString = Empleado::toString() + "\nComision: " + to_string(Comision);
    return newComercialString;
}

void Comercial::setComision(float comision){
    if(comision > 0 && comision < 101){
        Comision = comision;
    } else {
        Comision = 0;
    }
}
void Comercial::aumentarSalario(){
    if(getEdad() > 30 && Comision > 12){
        setSalario(getSalario() + 3000);
    }
}