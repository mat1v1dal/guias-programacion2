#include "class.h"
using namespace std;

bool Fecha::comprobarDia(int dia){
    if(dia<30 && dia>0){
        return true;
    } else return false;
}
bool Fecha::comprobarMes(int mes){
    if(mes < 12 && mes > 0){
        return true;
    } else return false;
}

void Fecha::setMes(int mes){
    if(comprobarMes(mes)){
        this->mes = mes;
    }
}

void Fecha::setDia(int dia){
    if(comprobarDia(dia)){
        this->dia = dia;
    }
}

void Fecha::operator++(){
    if(comprobarDia(dia)){
        dia++;
    } else{
        dia = 1;
    }
}