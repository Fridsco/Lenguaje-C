#include <stdio.h>

/*
* Abecedario con Ciclo For
* Refactorizado por Fridsco (2026)
* ---------------------------------------------------------
* Optimización: Se eliminaron librerías obsoletas (conio.h)
* y se simplificó el uso de variables para mejorar la eficiencia.
*/

int main() {
    // Usamos el propio carácter en el for para mayor legibilidad
    // En C, 'A' es equivalente a 65 en la tabla ASCII.
    for (char letra = 'A'; letra <= 'Z'; letra++) {
        printf("\n---> %c", letra);
    }

    printf("\n\nPresione Enter para finalizar...");
    getchar(); // Alternativa estándar a getche() de conio.h
    
    return 0;
}
