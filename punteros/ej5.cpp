#include<iostream>
#include<cstring>
using namespace std;

char *convertirMayuscula(char *a){
    for(char *i = a; *i != '\0'; i++){
        *i = toupper(*i);
    }
    return a;
}


int main(){

    char a[10];
    cin.getline(a, 10);

    char *resultado = convertirMayuscula(a);

    cout<<resultado;

}