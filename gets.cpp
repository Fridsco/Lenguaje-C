#include <conio.h>
#include <stdio.h>
/*
* Ejemplo de la función gets en C
* Fridsco
*/
main()
{
	char A[10];
	printf("Introduce una palabra ");
	gets(A);
	printf("\nLa palabra es: %s", A);
	getche();
	return 0;
}
