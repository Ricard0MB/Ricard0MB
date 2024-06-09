#include <stdio.h>
#include <string.h>

int main() {
  char nombre[50];

  // Solicitar el nombre
  printf("Ingrese su nombre: ");
  scanf("%s", nombre); // Corrected format specifier

  // Convertir el nombre a mayúsculas para facilitar la comparación
  (nombre);

  // Saludo personalizado según el nombre
  if (strcmp(nombre, "ricardo") == 0 || strcmp(nombre, "mejias") == 0) {
    printf("Hola %s, solo quería decirte que hace falta ramen instantáneo, compra cuando vuelvas.\n", nombre);
  } else if (strcmp(nombre, "kervin") == 0) {
    printf("Como está profesor espero que esté cansado de revisar de tantos programas porque faltó yo\n", nombre);
  } else {
    printf("No te habrás caído del cielo verdad? Porque luces como si te hubieras hecho mierda con la caída\n", nombre);
  }

  return 0;
}
