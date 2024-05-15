#include<iostream>
#include"class.h"
using namespace std;

int main(){
    Producto producto("Producto base", 1000);
    Perecedero perecedero("Queso", 1000, 3);
    NoPerecedero noPerecedero("Atun", 1000, "Tipo");

    cout << producto.toString() << endl;
    cout << perecedero.toString() << endl;
    cout << noPerecedero.toString() << endl;

    cout << "Precio de producto base: " << producto.calcularPrecio(2) << endl;
    cout << "Precio de producto perecedero: " << perecedero.calcularPrecio(2) << endl;
    cout << "Precio de producto no perecedero: " << noPerecedero.calcularPrecio(2) << endl;



}