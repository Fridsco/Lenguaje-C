#include <stdio.h>
#include <stdbool.h> // Para usar tipos booleanos

/*
* Lab: Safe Multiplier Tool
* Refactorizado por: Fridsco (2026)
* ---------------------------------------------------------
* Mejora: Eliminación de 'goto' y 'system(cls)'. 
* Implementación de ciclo do-while y validación de flujo.
*/

int main() {
    int x, y, z;
    char opcion;

    do {
        // En lugar de limpiar pantalla (cls), usamos saltos de línea
        // para mantener la portabilidad entre Windows, Linux y Wii.
        printf("\n========================================");
        printf("\n[MULTIPLIER UNIT ACTIVATED]");
        printf("\n========================================\n");

        printf("Ingrese el primer factor: ");
        if (scanf("%d", &x) != 1) break; // Validación básica de entrada

        printf("Ingrese el segundo factor: ");
        if (scanf("%d", &y) != 1) break;

        z = x * y;
        printf("\nRESULTADO: %d", z);

        printf("\n\n¿Desea realizar otra operación? (s/n): ");
        // Limpiamos el buffer para el siguiente carácter
        while (getchar() != '\n'); 
        scanf("%c", &opcion);

    } while (opcion == 's' || opcion == 'S');

    printf("\nSaliendo... Presione Enter.");
    while (getchar() != '\n');
    getchar();

    return 0;
}
