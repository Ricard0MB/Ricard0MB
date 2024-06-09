#include <stdio.h>

int main() {
  float peso, altura, imc;

  // Solicitar los datos del peso en kilogramos
  printf("Escriba su peso en kilogramos, por favor: ");
  scanf("%f", &peso);

  // Solicitar la altura del usuario en metros
  printf("Escriba su altura en metros para continuar: ");
  scanf("%f", &altura);

  // Procesando... Los resultados están abajo ⬇️ 
  printf("Procesando... Los resultados están abajo ⬇️\n");

  // Calcular el IMC
  imc = peso / (altura * altura);

  // Mostrar el IMC
  printf("Bueno su IMC es de: %.2f\n", imc);

  printf("Wow, en serio esa es?");
  
  return 0;
}