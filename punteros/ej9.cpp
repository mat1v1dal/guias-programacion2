#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int *a = new int[n];
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }


    for(int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }

    int* p = a;
    cout<<"\n";
    for(int i = 0; i<n; i++){
        cout<<*p;
        p++;
    }

    delete[] a;
}