#include <iostream>
#include "class.h"
using namespace std;
int main() {
    Empleado e1("Juan", 25, 1000);
    Repartidor r1("Pedro", 30, 1200, 3);
    Comercial c1("Maria", 35, 1500, 15);

    cout << e1.toString() << endl;
    cout << r1.toString() << endl;
    cout << c1.toString() << endl;

    r1.aumentarSalario();
    c1.aumentarSalario();

    cout << "Salario de " << r1.getNombre() << ": " << r1.getSalario() << endl;
    cout << "Salario de " << c1.getNombre() << ": " << c1.getSalario() << endl;

    return 0;
}