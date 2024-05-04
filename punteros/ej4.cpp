#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    int a[15];
    int *p;
    for(int i = 0; i<15;i++){
        a[i] = rand() % 100 + 1;
    }

    for(int i = 0; i<15; i++){
        p = &a[i];
        cout<<*p<<" "<<p<<endl;
    }
}