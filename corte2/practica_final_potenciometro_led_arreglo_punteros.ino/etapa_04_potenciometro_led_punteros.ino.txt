/*
  Etapa 4
  Potenciómetro + LED.
  Una función lee el potenciómetro y otra decide el estado del LED.
*/

const int PIN_POTENCIOMETRO = A0;
const int PIN_LED = 9;
const int ADC_MAX = 1023;
const float VREF = 5.0;
const int UMBRAL_LED = 50;

void leerPotenciometro(int pin, int *valorADC, float *voltaje, int *porcentaje) {
    /* Verificamos punteros antes de escribir resultados. */
    if (valorADC == nullptr || voltaje == nullptr || porcentaje == nullptr) {
        return;
    }

    /* Se escribe la lectura ADC en la variable apuntada. */
    *valorADC = analogRead(pin);

    /* Se escribe el voltaje calculado en la variable apuntada. */
    *voltaje = (*valorADC * VREF) / ADC_MAX;

    /* Se escribe el porcentaje calculado en la variable apuntada. */
    *porcentaje = (int)((long)(*valorADC) * 100L / ADC_MAX);
}

void decidirEstadoLED(int porcentaje, int umbral, int *estadoLED) {
    /* Verificamos que el puntero estadoLED sea válido. */
    if (estadoLED == nullptr) {
        return;
    }

    /* Si el porcentaje supera o iguala el umbral, el LED se encenderá. */
    if (porcentaje >= umbral) {
        *estadoLED = HIGH;
    } else {
        *estadoLED = LOW;
    }
}

void aplicarEstadoLED(int pinLED, int estadoLED) {
    /* Aplicamos físicamente el estado al pin del LED. */
    digitalWrite(pinLED, estadoLED);
}

void mostrarDatos(int valorADC, float voltaje, int porcentaje, int estadoLED) {
   /* Mostramos todos los datos en el Monitor Serial. */
  Serial.print("ADC = ");
  Serial.print(valorADC); 

  Serial.print(" | Voltaje = ");
  Serial.print(voltaje, 2);
  Serial.print(" V");

  Serial.print(" | Porcentaje = ");
  Serial.print(porcentaje);
  Serial.print(" %");

  Serial.print(" | LED = ");
  if (estadoLED == HIGH) {
      Serial.println("ENCENDIDO");
  } else {
      Serial.println("APAGADO");
  }
}

void setup() {
   Serial.begin(9600);

   /* Configuramos el pin del LED como salida. */
   pinMode(PIN_LED, OUTPUT);
}

void loop() {
    int valorADC = 0;
    float voltaje = 0.0;
    int porcentaje = 0;
    int estadoLED = LOW;

    /* La función escribe tres resultados usando punteros. */
    leerPotenciometro(PIN_POTENCIOMETRO, &valorADC, &voltaje, &porcentaje);

    /* La función escribe el estado del LED usando un puntero. */
    decidirEstadoLED(porcentaje, UMBRAL_LED, &estadoLED);

    /* Se aplica el estado calculado al LED. */
    aplicarEstadoLED(PIN_LED, estadoLED);

   /* Se muestra el reporte. */
   mostrarDatos(valorADC, voltaje, porcentaje, estadoLED);

   delay(500);
}
