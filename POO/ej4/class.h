#include<iostream>
#include<string>
#include<random>
using namespace std;

class Persona{
    private:
    string Nombre, Apellido, DNI, EstadoCivil;
    public:
    Persona(string nombre="", string apellido="", string estadoCivil=""):Nombre(nombre),Apellido(apellido),EstadoCivil(estadoCivil){
        DNI = rand() % 1000000000 + 1000000000;
    }

    void setNombre(string nombre){Nombre = nombre;}
    void setApellido(string apellido){Apellido = apellido;}
    void setEstadoCivil(string estadoCivil){EstadoCivil = estadoCivil;}

    string getNombre(){return Nombre;}
    string getApellido(){return Apellido;}
    string getEstadoCivil(){return EstadoCivil;}
    string getDni(){return DNI;}

    virtual string toString(){
        return "Nombre: " + Nombre + "\nApellido: " + Apellido + "\nDNI: " + DNI + "\nEstado Civil: " + EstadoCivil;
    }
};

class Empleado:public Persona{
    private:
    int AnioIncorporacion;
    int numOficina;
    public:
    Empleado(string nombre="", string apellido="", string estadoCivil="", int anioIncorporacion=0, int numOficina=0):Persona(nombre, apellido, estadoCivil),AnioIncorporacion(anioIncorporacion),numOficina(numOficina){}

    void setAnioIncorporacion(int anioIncorporacion){AnioIncorporacion = anioIncorporacion;}
    void setNumOficina(int numOficina){numOficina = numOficina;}
    int getAnioIncorporacion(){return AnioIncorporacion;}
    int getNumOficina(){return numOficina;}

    string toString() override;

};

class Profesor:public Empleado{
    private:
    string Departamento;
    public:
    Profesor(string nombre="", string apellido="", string estadoCivil="", int anioIncorporacion=0, int numOficina=0, string departamento=""):Empleado(nombre, apellido, estadoCivil, anioIncorporacion, numOficina),Departamento(departamento){}
};