#include<iostream>
#include<string>
using namespace std;

class Empleado{
    private:
    string Nombre;
    int Edad;
    float Salario;
    public:
    Empleado(string nombre="No definido", int edad=18, float salario=0): Nombre(nombre), Edad(edad), Salario(salario){}
    
    void setNombre(string nombre){Nombre = nombre;};
    void setEdad(int edad){Edad = edad;};
    void setSalario(float salario){Salario = salario;};

    virtual string toString(){
        string newString = "Nombre: " + Nombre + "\nEdad: " + to_string(Edad) + "\nSalario: " + to_string(Salario);
        return newString;
    };
    
    string getNombre(){return Nombre;};
    int getEdad(){return Edad;};
    float getSalario(){return Salario;};

    virtual void aumentarSalario(){};

};

class Repartidor:public Empleado{
    private:
    int Zona;
    public:
    Repartidor(string nombre="No definido", int edad=18, float salario=0, int zona=0): Empleado(nombre, edad, salario), Zona(zona){}

    string toString() override;
    void setZona(int zona){Zona = zona;};
    void aumentarSalario() override;
    int getZona(){return Zona;};
};

class Comercial:public Empleado{
    private:
    float Comision; 
    public:
    Comercial(string nombre="No definido", int edad=18, float salario=0, float comision=0): Empleado(nombre, edad, salario), Comision(comision){}

    string toString() override;
    void setComision(float comision);
    void aumentarSalario() override;
    float getComision(){return Comision;};
};