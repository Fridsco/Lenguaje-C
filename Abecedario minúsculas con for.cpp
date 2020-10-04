#include <conio.h>	//función getche()
#include <stdio.h>	//puts, scanf, etc

/*
* Abecedario con For
* Escrito por Fridsco
* En el código ASCII, el abecedario empieza desde el número 97 (En minúsculas) y termina en 122.
* Entonces lo que se hace aquí, es imprimir la tabla.
*/

main()
{						  																  
	int X, Y; // Declaración de variables.
	char abc = 97; // La letra "97" empieza en el número 97 de la tabla y la "z" es 122. ASCII.
	for(X=97; X<=122; X++) //El ciclo for empieza en 97.
	{						
		printf("\n---> %c", X, abc); // Imprime en pantalla el abecedario usando ASCII						   	   
	}
	getche (); // Pausa del programa hasta que se presione una tecla.			   		   
	return 0; // Termina el programa
}
