#include<iostream>
using namespace std;

class Fecha{
    private:
    int dia, mes, anio;

    public:
    Fecha() : dia(1), mes(1), anio(1900){}
    Fecha(int a, int m, int an) : dia(a), mes(m), anio(an){}

    void setDia(int dia);
    void setMes(int mes);
    void setAnio(int anio);

    void operator++();
    void operator--();
};