#include <iostream> /* Incluye la biblioteca necesaria para cout. */
using namespace std;

int main() { /* Funcion principal del programa. */
    int *p = nullptr; /* El puntero se inicializa en nullptr porque aun no apunta a un int. */

    if (p != nullptr) { /* Solo se desreferencia si apunta a una direccion valida. */
        cout << "Valor = " << *p << endl;
    } else {
        cout << "p no apunta a una direccion valida." << endl;
    }

    return 0; /* Finalizacion exitosa. */
}
