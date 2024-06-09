#include <stdio.h>

int main() {
  int segundosTotales, horas, minutos, segundosRestantes;

  // Solicitar el número de segundos
  printf("Ingrese el número de segundos: ");
  scanf("%d", &segundosTotales);

  // Calcular las horas
  horas = segundosTotales / 3600;
  segundosTotales %= 3600;

  // Calcular los minutos
  minutos = segundosTotales / 60;
  segundosRestantes = segundosTotales % 60;

  // Mostrar el resultado
  printf("%d segundos equivalen a: %dh %dmin %dseg\n", segundosTotales, horas, minutos, segundosRestantes);

  return 0;
}
