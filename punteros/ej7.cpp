//Obtener una función copia que utilice punteros para copiar una cadena en otra.
#include<iostream>
#include<cstring>
using namespace std;

void copia(const char *a, char *b, int longitud){
    for(int i = 0; i<longitud; i++){
        *b = *a;
        a++;
        b++;
    }  
    *b = '\0';
}

int main(){
    char a[50];
    char b[50];
    cin.getline(a, 50);
    copia(a,b,strlen(a));

    cout<<b;

}