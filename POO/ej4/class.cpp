#include "class.h"

string Empleado::toString(){
    return Persona::toString() + "\nAño de Incorporación: " + to_string(AnioIncorporacion) + "\nNúmero de Oficina: " + to_string(numOficina);
}