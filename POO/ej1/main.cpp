#include<iostream>
#include "class.h"
using namespace std;

int main(){

    Number number1(2,3);
    Number number2(5,2);

    --number1;
    
    cout<<number1.getNumerador()<<"/"<<number1.getDenominador();
}