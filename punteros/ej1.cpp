#include<iostream>
using namespace std;

int main(){
    int a=5;
    int b=10;
    int *p;

    p = &a;
    cout<<p<<endl;

    p = &b;
    cout<<p;
}