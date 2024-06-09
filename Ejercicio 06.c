#include <stdio.h>

int main() {
  float base, altura, area;

  // Solicitar la base y la altura
  printf("Ingrese la base del triángulo: ");
  scanf("%f", &base);
  printf("Ingrese la altura del triángulo: ");
  scanf("%f", &altura);

  // Calcular el área
  area = (base * altura) / 2;

  // Mostrar el área
  printf("El área del triángulo es: %.2f\n", area);

  return 0;
}
