#include <iostream>
#include<string>
using namespace std;
class Producto{
    private:
    string Nombre;
    float Precio;
    public:
    Producto(string nombre="default", float precio=0):Nombre(nombre),Precio(precio){}       
    
    void setNombre(string nombre){Nombre = nombre;}
    void setPrecio(float precio){Precio = precio;}  

    float getPrecio(){return Precio;}
    string getNombre(){return Nombre;} 

    virtual string toString(){
        return "Nombre: "+Nombre+" Precio: "+to_string(Precio);
    }

    virtual float calcularPrecio(int cantidad){
        return Precio*cantidad;
    }
};

class Perecedero: public Producto{
    private:
    int diasCaducar;
    public:
    Perecedero(string nombre="default", float precio=0, int diasCaducar=0):Producto(nombre, precio),diasCaducar(diasCaducar){}

    void setDiasCaducar(int diasCaducar){diasCaducar = diasCaducar;}
    void getDiasCaducar(int diasCaducar){diasCaducar = diasCaducar;}

    string toString() override;

    float calcularPrecio(int cantidad) override;

};

class NoPerecedero: public Producto{
    private:
    string Tipo;
    public:
    NoPerecedero(string nombre="default", float precio=0, string tipo="default"):Producto(nombre, precio),Tipo(tipo){}
    void setTipo(string tipo){Tipo = tipo;}
    string getTipo(){return Tipo;}

    float calcularPrecio(int cantidad) override;
};