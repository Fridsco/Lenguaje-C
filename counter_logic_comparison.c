#include <stdio.h>

/*
* Lab: Counter Logic Comparison (For vs Do-While)
* Refactorizado por: Fridsco (2026)
* ---------------------------------------------------------
* Este módulo demuestra la diferencia entre la evaluación 
* previa (For) y la evaluación posterior (Do-While).
*/

void count_with_for(int limit) {
    printf("\n--- Metodo FOR ---\n");
    for (int i = 1; i <= limit; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

void count_with_do_while(int limit) {
    printf("\n--- Metodo DO-WHILE ---\n");
    int i = 1;
    do {
        printf("%d ", i);
        i++;
    } while (i <= limit);
    printf("\n");
}

int main() {
    int target;
    printf("Ingrese el numero limite: ");
    if (scanf("%d", &target) != 1) return 1;

    // Si el usuario pone 0, verá que el FOR no hace nada 
    // pero el DO-WHILE imprime al menos el 1.
    count_with_for(target);
    count_with_do_while(target);

    return 0;
}
