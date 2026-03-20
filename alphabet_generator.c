#include <stdio.h>

/*
* Lab: Universal Alphabet Generator
* Refactorizado por: Fridsco (2026)
* ---------------------------------------------------------
* Este programa demuestra el control de iteración sobre tipos 
* de datos char, eliminando la dependencia de códigos ASCII manuales
* y librerías obsoletas para garantizar portabilidad en Wii IOS y PC.
*/

void print_range(char start, char end, const char* label) {
    printf("\n--- %s ---", label);
    for (char c = start; c <= end; c++) {
        printf("\n [%d] ---> %c", c, c); // Mostramos el código Y el carácter
    }
    printf("\n");
}

int main() {
    printf("SISTEMA DE GENERACION DE CARACTERES\n");
    
    // Ejecución de rangos
    print_range('A', 'Z', "MAYUSCULAS");
    print_range('a', 'z', "MINUSCULAS");

    printf("\nProceso finalizado. Presione Enter para salir...");
    getchar(); 
    
    return 0;
}
