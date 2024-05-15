
#include "class.h"
using namespace std;
string Empleado::toString(){
    return Persona::toString() + "\nAño de Incorporación: " + to_string(AnioIncorporacion) + "\nNúmero de Oficina: " + to_string(numOficina);
}

string Profesor::toString(){
    return Empleado::toString() + "\nDepartamento: " + Departamento;
}

string PersonalServicio::toString(){
    return Empleado::toString() + "\nSección: " + Seccion;
} 

string Estudiante::toString(){
    return Persona::toString() + "\nCarrera: " + Curso;

}