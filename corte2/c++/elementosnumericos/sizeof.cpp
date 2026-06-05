#include <iostream> // Permite usar cout y endl
using namespace std; // Evita escribir std:: antes de cout y endl

int main() { // Inicia la funcion principal
    cout << "bool: " << sizeof(bool) << " bytes" << endl; // Tamano de bool (logico)
    cout << "char: " << sizeof(char) << " bytes" << endl; // Tamano de char (caracter)
    cout << "short: " << sizeof(short) << " bytes" << endl; // Tamano de short (entero corto)
    cout << "int: " << sizeof(int) << " bytes" << endl; // Tamano de int (entero estandar)
    cout << "long: " << sizeof(long) << " bytes" << endl; // Tamano de long (entero largo)
    cout << "long long: " << sizeof(long long) << " bytes" << endl; // Tamano de long long (entero muy grande)
    cout << "float: " << sizeof(float) << " bytes" << endl; // Tamano de float (decimal precision simple)
    cout << "double: " << sizeof(double) << " bytes" << endl; // Tamano de double (decimal precision doble)
    
    return 0; // Finaliza el programa correctamente
}

