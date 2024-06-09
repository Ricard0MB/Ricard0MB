#include <stdio.h>

int main() {
  float lado1, lado2, lado3, perimetro;

  // Solicitar la longitud de los lados
  printf("Ingrese la longitud del lado 1 del triángulo: ");
  scanf("%f", &lado1);
  printf("Ingrese la longitud del lado 2 del triángulo: ");
  scanf("%f", &lado2);
  printf("Ingrese la longitud del lado 3 del triángulo: ");
  scanf("%f", &lado3);

  // Calcular el perímetro
  perimetro = lado1 + lado2 + lado3;

  // Mostrar el perímetro
  printf("El perímetro del triángulo es: %.2f\n", perimetro);

  return 0;
}
