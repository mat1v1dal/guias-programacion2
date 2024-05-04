#include<iostream>
#include<cstring>
using namespace std;

void invertir(char *a){
    char *inicio = a;
    char *fin = a + strlen(a) - 1;
    cout<<*inicio<<" "<<*fin;
}

int main(){

    char a[50];
    cin.getline(a, 50);

    invertir(a);


}