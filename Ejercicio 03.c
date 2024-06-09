#include <stdio.h>

int main() {
  float valor, conversion;
  char unidadOriginal, unidadDestino;

  printf("Ingrese el valor de temperatura: ");
  scanf("%f", &valor);

  printf("Ingrese la unidad original (C/F): ");
  scanf(" %c", &unidadOriginal);

  printf("Ingrese la unidad de destino (C/F): ");
  scanf(" %c", &unidadDestino);

  if (unidadOriginal == 'C' && unidadDestino == 'F') {
    conversion = (valor * 9.0) / 5.0 + 32.0;
    printf("%.2f °C es igual a %.2f °F\n", valor, conversion);
  } else if (unidadOriginal == 'F' && unidadDestino == 'C') {
    conversion = (valor - 32.0) * 5.0 / 9.0;
    printf("%.2f °F es igual a %.2f °C\n", valor, conversion);
  } else {
    printf("Las unidades ingresadas no son válidas.\n");
  }

  return 0;
}
