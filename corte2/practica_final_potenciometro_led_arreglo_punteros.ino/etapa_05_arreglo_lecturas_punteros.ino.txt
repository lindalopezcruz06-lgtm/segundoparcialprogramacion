/*
  Etapa 5
  Se toman varias lecturas del potenciómetro y se guardan en un arreglo.
  Luego se calcula promedio, mínimo y máximo usando punteros de salida.
*/

const int PIN_POTENCIOMETRO = A0;
const int CANTIDAD_LECTURAS = 10;
const int PAUSA_ENTRE_LECTURAS_MS = 20;

void tomarLecturas(int pin, int datos[], int cantidad, int pausaMs) {
    /* Verificamos que el arreglo no sea nullptr y que la cantidad sea válida. */
   if (datos == nullptr || cantidad <= 0) {
       return;
   }

   /* Recorremos el arreglo y guardamos una lectura en cada posición. */
   for (int i = 0; i < cantidad; i++) {
        datos[i] = analogRead(pin);
        delay(pausaMs);
   }
}

void analizarLecturas(int datos[], int cantidad,
                      int *promedio,
                      int *minimo,
                      int *maximo) {
    /* Verificamos punteros y cantidad antes de procesar. */
    if (datos == nullptr || promedio == nullptr || minimo == nullptr || maximo ==
    nullptr || cantidad <= 0) {
        return;
    }

    /* Usamos long para acumular sin riesgo de desbordamiento. */
    long suma = 0;

    /* Inicializamos mínimo y máximo con el primer dato del arreglo. */
    *minimo = datos[0];
    *maximo = datos[0];

    /* Recorremos todas las lecturas. */
    for (int i = 0; i < cantidad; i++) {
         /* Acumulamos la lectura actual. */
         suma = suma + datos[i];

        /* Actualizamos el mínimo si encontramos un valor menor. */
        if (datos[i] < *minimo) {
            *minimo = datos[i];
        }

        /* Actualizamos el máximo si encontramos un valor mayor. */
        if (datos[i] > *maximo) {
            *maximo = datos[i];
        }
    }

    /* Calculamos el promedio entero. */
    *promedio = (int)(suma / cantidad);
}

void mostrarArreglo(int datos[], int cantidad) {
    /* Verificamos que el arreglo sea válido. */
    if (datos == nullptr || cantidad <= 0) {
        return;
    }
  
    Serial.print("Lecturas: ");
    /* Mostramos cada lectura del arreglo. */
    for (int i = 0; i < cantidad; i++) {
         Serial.print(datos[i]);
         Serial.print(" ");
    }

    Serial.println();
}

void setup() {
    Serial.begin(9600);
}

void loop() {
    /* Arreglo local para guardar varias lecturas. */
    int lecturas[CANTIDAD_LECTURAS];

    /* Variables donde se guardarán los resultados. */
    int promedio = 0;
    int minimo = 0;
    int maximo = 0;

    /* Llenamos el arreglo con lecturas del potenciómetro. */
    tomarLecturas(PIN_POTENCIOMETRO, lecturas, CANTIDAD_LECTURAS,
    PAUSA_ENTRE_LECTURAS_MS);

     /* Analizamos el arreglo y escribimos los resultados mediante punteros. */
    analizarLecturas(lecturas, CANTIDAD_LECTURAS, &promedio, &minimo, &maximo);

     /* Mostramos el arreglo y sus resultados. */
    mostrarArreglo(lecturas, CANTIDAD_LECTURAS);
    Serial.print("Promedio = ");
    Serial.println(promedio);
    Serial.print("Minimo = ");
    Serial.println(minimo);
    Serial.print("Maximo = ");
    Serial.println(maximo);
    Serial.println("------------------------------");

    delay(1000);
}
