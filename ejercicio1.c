#include <stdio.h>

int main() {
  float num1, num2, result;
  int choice;

  // Solicitar el primer número
  printf("Ingrese el primer número: ");
  scanf("%f", &num1);

  // Mostrar el menú de operaciones
  printf("\nSeleccione la operación:\n");
  printf("1. Suma\n");
  printf("2. Resta\n");
  printf("3. Multiplicación\n");
  printf("4. División\n");
  printf("Ingrese su elección: ");
  scanf("%d", &choice);

  // Solicitar el segundo número
  printf("\nIngrese el segundo número: ");
  scanf("%f", &num2);

  // Realizar la operación según la elección
  switch (choice) {
    case 1:
      result = num1 + num2;
      break;
    case 2:
      result = num1 - num2;
      break;
    case 3:
      result = num1 * num2;
      break;
    case 4:
      if (num2 == 0) {
        printf("Error: División por cero.\n");
        return 1;
      }
      result = num1 / num2;
      break;
    default:
      printf("Opción inválida.\n");
      return 1;
  }

  // Mostrar el resultado
  printf("\nEl resultado es: %.2f\n", result);

  return 0;
}
