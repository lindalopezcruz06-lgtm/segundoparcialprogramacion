#include <iostream> /* Incluye la biblioteca necesaria para cout y cin. */
using namespace std;

void duplicar(int *p) { /* Recibe la direccion de un entero. */
    if (p != nullptr) { /* Verifica que el puntero sea valido. */
        *p = (*p) * 2; /* Duplica el valor almacenado en la direccion apuntada. */
    }
}

void intercambiar(int *a, int *b) { /* Recibe dos direcciones de enteros. */
    if (a == nullptr || b == nullptr) { /* Verifica que ambas direcciones sean validas. */
        return; /* Sale si alguna direccion no es valida. */
    }

    int temp = *a; /* Guarda temporalmente el contenido apuntado por a. */
    *a = *b; /* Copia en a el contenido apuntado por b. */
    *b = temp; /* Copia en b el valor temporal. */
}

void analizarNumeros(int a, int b, int c, int *suma, int *mayor, int *menor) {
    if (suma == nullptr || mayor == nullptr || menor == nullptr) { /* Verifica direcciones. */
        return; /* Sale si alguna direccion no es valida. */
    }

    *suma = a + b + c; /* Escribe la suma en la direccion recibida. */

    *mayor = a; /* Supone inicialmente que a es el mayor. */
    if (b > *mayor) { /* Compara b. */
        *mayor = b; /* Actualiza el mayor. */
    }
    if (c > *mayor) { /* Compara c. */
        *mayor = c; /* Actualiza el mayor. */
    }

    *menor = a; /* Supone inicialmente que a es el menor. */
    if (b < *menor) { /* Compara b. */
        *menor = b; /* Actualiza el menor. */
    }
    if (c < *menor) { /* Compara c. */
        *menor = c; /* Actualiza el menor. */
    }
}

int main() { /* Funcion principal del programa. */
    int x = 10; /* Primera variable de trabajo. */
    int y = 20; /* Segunda variable de trabajo. */
    int z = 5;  /* Tercera variable de trabajo. */

    int *px = &x; /* px guarda la direccion de x. */

    int suma;  /* Variable para recibir la suma. */
    int mayor; /* Variable para recibir el mayor. */
    int menor; /* Variable para recibir el menor. */
    int opcion; /* Opcion seleccionada por el usuario. */

    do { /* Ciclo principal del menu. */
        cout << "\n========== MENU CORTO DE PUNTEROS ==========\n";
        cout << "1. Mostrar x, &x, px y *px\n";
        cout << "2. Duplicar x usando el puntero px\n";
        cout << "3. Intercambiar x y y usando punteros\n";
        cout << "4. Analizar x, y, z usando punteros de salida\n";
        cout << "0. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion; /* Lee la opcion. */

        switch (opcion) { /* Decide que accion ejecutar. */
            case 1:
                cout << "x = " << x << endl;
                cout << "&x = " << &x << endl;
                cout << "px = " << px << endl;
                cout << "*px = " << *px << endl;
                break;

            case 2:
                cout << "Antes: x = " << x << endl;
                duplicar(px); /* Modifica x usando su direccion. */
                cout << "Despues: x = " << x << endl;
                break;

            case 3:
                cout << "Antes: x = " << x << ", y = " << y << endl;
                intercambiar(&x, &y); /* Envia direcciones de x y y. */
                cout << "Despues: x = " << x << ", y = " << y << endl;
                break;

            case 4:
                analizarNumeros(x, y, z, &suma, &mayor, &menor);
                cout << "Suma = " << suma << endl;
                cout << "Mayor = " << mayor << endl;
                cout << "Menor = " << menor << endl;
                break;

            case 0:
                cout << "Fin del programa." << endl;
                break;

            default:
                cout << "Opcion no valida." << endl;
                break;
        }
    } while (opcion != 0); /* Repite mientras no se seleccione salir. */

    return 0; /* Finalizacion exitosa. */
}
