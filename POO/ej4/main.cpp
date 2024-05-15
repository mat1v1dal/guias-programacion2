#include<iostream>
#include "class.h"
using namespace std;

int main(){

    Profesor p1("Juan", "Perez", "Soltero", 2010, 1, "Matemáticas");
    PersonalServicio ps1("Maria", "Gonzalez", "Casada", 2015, 2, "Administración");
    Estudiante e1("Pedro", "Gomez", "Soltero", "Ingeniería");
    cout << p1.toString() << endl;
    cout << endl;
    cout << ps1.toString() << endl;
    cout << e1.toString() << endl;
    
    return 0;
}