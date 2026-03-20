#include <conio.h>	//función getche()
#include <stdio.h>	//puts, scanf, etc

/*
* Abecedario con For
* Escrito por Fridsco
* En el código ASCII, el abecedario empieza desde el número 64 (En mayúsculas) y termina en 90.
* Entonces lo que se hace aquí, es imprimir la tabla.
*/

main()
{						  																  
	int X, Y; // Declaración de variables.
	char ABC = 65; // La letra "A" empieza en el número 65 de la tabla y la Z es 90. ASCII.
	for(X=65; X<=90; X++) //El ciclo for empieza en 65.
	{																		
		printf("\n---> %c", X, ABC); // Imprime en pantalla el abecedario usando ASCII						   	   
	}
	getche (); // Pausa del programa hasta que se presione una tecla.			   		   
	return 0; // Termina el programa
}
