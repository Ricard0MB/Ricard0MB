#include <stdio.h>

int main() {
  float lado, perimetro;

  // Solicitar la longitud del lado
  printf("Ingrese los datos de la longitud del lado del cuadrado aquí: ");
  scanf("%f", &lado);

  // Calcular el perímetro
  perimetro = 4 * lado;

  // Mostrar el perímetro
  printf("Entonces con los datos obtenidos el perímetro del cuadrado es: %.2f\n", perimetro);

  printf("De nada... (siguo esperando las gracias)");

  return 0;
}
