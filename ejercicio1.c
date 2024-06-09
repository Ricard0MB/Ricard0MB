int main() {
 
  float num1, num2, result;
  int choice;

  printf("Ingrese el primer número: ");
  scanf("%f", &num1);

  printf("\nSeleccione la operación:\n");
  printf("1. Suma\n");
  printf("2. Resta\n");
  printf("3. Multiplicación\n");
  printf("4. División\n");
  printf("Ingrese su elección: ");
  scanf("%d", &choice);

  printf("\nIngrese el segundo número: ");
  scanf("%f", &num2);

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

  printf("\nEl resultado es: %.2f\n", result);

  return 0;
}