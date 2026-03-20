#include <stdio.h>

/*
* Lab: Multi-Table Engine
* Refactorizado por: Fridsco (2026)
* ---------------------------------------------------------
* Mejora: Eliminación de dependencias de Windows API para 
* compatibilidad universal. Implementación de bucle controlado.
*/

void generate_table(int base) {
    printf("\n--- TABLA DEL %d ---\n", base);
    for (int i = 1; i <= 10; i++) {
        printf("  [0x%02X] %2d x %2d = %3d\n", i, base, i, base * i);
    }
    printf("--------------------\n");
}

int main() {
    int number;
    char exit_signal = 's';

    printf("TABLAS DE MULTIPLICAR\n");

    while (exit_signal == 's' || exit_signal == 'S') {
        printf("\nIngrese UN numero base: ");
        if (scanf("%d", &number) == 1) {
            generate_table(number);
        } else {
            printf("[!] Error: Entrada no valida.\n");
            while (getchar() != '\n');
        }

        printf("\n¿Desea calcular otra tabla? (s/n): ");
        while (getchar() != '\n');
        scanf("%c", &exit_signal);
    }

    printf("\nSaliendo...");
    return 0;
}
