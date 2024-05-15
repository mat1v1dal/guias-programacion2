#include<iostream>
#include<cstring>
using namespace std;

void invertir(char *a){
    char *inicio = a;
    char aux;
    char *fin = a + strlen(a) - 1;
    while (inicio < fin) {
        char temp = *inicio;
        *inicio = *fin;
        *fin = temp;
        inicio++;
        fin--;
    }
}

int main(){

    char a[51];
    cin.getline(a, 51);

    invertir(a);
    cout<<a;


}