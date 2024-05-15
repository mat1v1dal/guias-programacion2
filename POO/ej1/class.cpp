#include "class.h"

void Number::setDenominador(int denominador){
    if(denominador!=0){
        Denominador = denominador;
    }
}

void Number::operator+(Number &number){
    int newDen = Denominador * number.Denominador;
    int newNum = Numerador * number.Denominador + number.Numerador * Denominador;
        
    Denominador = newDen;
    Numerador = newNum;
}

void Number::operator-(Number &number){
    int newDen = Denominador * number.Denominador;
    int newNum = Numerador * number.Denominador - number.Numerador * Denominador;
        
    Denominador = newDen;
    Numerador = newNum;
}

void Number::operator++(){
    Numerador += Denominador;
}
void Number::operator--(){
    Numerador -= Denominador;
}
void Number::operator+=(int num){
    Numerador += num * Denominador;
}
void Number::operator-=(int num){
    Numerador -= num * Denominador;
}