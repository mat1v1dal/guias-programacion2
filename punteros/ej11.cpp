#include<iostream>
using namespace std;

int main(){
    int filas, columnas;
    cin>>filas>>columnas;
    int** arreglo;
    arreglo = new int*[filas];
    for(int i = 0; i<filas; i++){
        arreglo[i] = new int[columnas];
    }

    

}