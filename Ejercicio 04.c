#include <stdio.h>

int main() {
  float lado, area;

  // Solicitar la longitud del lado
  printf("Ingrese la longitud del lado del cuadrado: ");
  scanf("%f", &lado);

  // Calcular el área
  area = lado * lado;

  // Mostrar el área
  printf("El área del cuadrado es: %.2f\n", area);

  return 0;
}
