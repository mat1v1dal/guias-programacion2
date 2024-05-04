#include<iostream>
using namespace std;

int main(){

    int a[5];
    int *p1;
    int *p2;

    p1 = &a[0];
    p2 = &a[4];

    cout<<p2-p1;

}