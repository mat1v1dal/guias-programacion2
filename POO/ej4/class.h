#include<iostream>
#include<string>
#include<random>
using namespace std;

class Persona{
    private:
    string Nombre, Apellido, EstadoCivil;
    int DNI;
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
    int getDni(){return DNI;}

    virtual string toString(){
        return "Nombre: " + Nombre + "\nApellido: " + Apellido + "\nDNI: " + to_string(DNI) + "\nEstado Civil: " + EstadoCivil;
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
    
    void setDepartamento(string departamento){Departamento = departamento;}

    string getDepartamento(){return Departamento;}
    string toString() override;


};

class PersonalServicio:public Empleado{
    private:
    string Seccion;
    public:
    PersonalServicio(string nombre="", string apellido="", string estadoCivil="", int anioIncorporacion=0, int numOficina=0, string seccion=""):
    Empleado(nombre, apellido, estadoCivil, anioIncorporacion, numOficina),Seccion(seccion){}

    void setSeccion(string seccion){Seccion = seccion;}
    string getSeccion(){return Seccion;}
    string toString() override;
};

class Estudiante:public Persona{
    private:
    string Curso;
    public:
    Estudiante(string nombre="", string apellido="", string estadoCivil="", string curso=""):Persona(nombre, apellido, estadoCivil),Curso(curso){}
    void setCurso(string curso){Curso = curso;}
    string getCurso(){return Curso;}
    string toString() override;

};