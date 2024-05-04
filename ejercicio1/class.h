#include<iostream>
using namespace std;
class Cuenta{
    private:
    string Titular;
    float Cantidad;
    public:
    Cuenta();
    void setCantidad( float cantidad);
    void setTitular( string titular );
    string getTitular();
    float getCantidad();
};