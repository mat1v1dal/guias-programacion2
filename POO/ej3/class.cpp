#include<iostream>
#include<string>
#include "class.h"
using namespace std;

string Perecedero::toString(){
    string newPerecederoString = Producto::toString() + "\nDias a caducar: " + to_string(diasCaducar);
    return newPerecederoString;
}

float Perecedero::calcularPrecio(int cantidad){
    if(diasCaducar == 3){
        setPrecio(getPrecio() * 0.5);
    } 
    else if(diasCaducar == 2){
        setPrecio(getPrecio() * 0.33);
    } else if(diasCaducar == 1){
        setPrecio(getPrecio() * 0.25);
    }

    return Producto::calcularPrecio(cantidad);
}

float NoPerecedero::calcularPrecio(int cantidad){
    return Producto::calcularPrecio(cantidad);
}
