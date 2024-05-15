#include<iostream>
#include<cstring>
using namespace std;

int minuscula(char *a, int longitud){
    int contador = 0;
    for(int i = 0; i<longitud; i++){
        if(*a == 'a' || *a == 'e' ||*a == 'i' ||
        *a == 'o' ||*a == 'u'){
            contador++;
        } a++;
    } return contador;
}


int main(){
    char a[50];
    cin.getline(a, 50);

    cout<<minuscula(a, strlen(a));
}