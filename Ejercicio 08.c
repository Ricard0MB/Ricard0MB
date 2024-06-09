#include <stdio.h>

#define PI 3.14159

int main() {
  float radio, circunferencia;

  // Solicitar el radio del círculo
  printf("Ingrese el radio del círculo: ");
  scanf("%f", &radio);

  // Calcular la circunferencia
  circunferencia = 2 * PI * radio;

  // Mostrar la circunferencia
  printf("La circunferencia del círculo es: %.2f\n", circunferencia);

  return 0;
}
