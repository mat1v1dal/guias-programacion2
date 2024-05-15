#include<iostream>
#include<algorithm>
#include<random>
using namespace std;


void ordenar(int *a, int n){
    bool bandera = false;
    int aux;
    while(!bandera){
        bandera = true;
        for(int i = 0; i < n-1; i++){
            if(a[i] < a[i+1]){
                aux = a[i];
                a[i] = a[i+1];
                a[i+1] = aux;
                bandera = false;
            }
        } 
    }
}

int main(){
    int n;
    cin>>n;

    int* a = new int[n];

    for(int i = 0; i<n; i++){
        a[i] = rand() % 100 + 1;
    }
    ordenar(a,n);
    for(int i = 0; i<n; i++){
        cout<<a[i]<<" ";

    }

    delete[] a;
}