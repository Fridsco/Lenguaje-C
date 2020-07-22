#include <conio.h>			   //Librería que se usará para la función getche()
#include <stdio.h>			  //Librería que se usará para la función, puts, scanf, etc
#include <windows.h>		//Librería que se usará para la función Sleep (Milisegundos)

/*
* Contador con For
* Fridsco
*/

main()
{						  																  
	int x, y;			 																 //Se declaran variables de tipo entero
	puts("Este programa cuenta del cero hasta el numero que se le indique:\n");	
	Inicio:	//Regresa al inicio del programa
	puts("\ningrese un numero de tipo entero:");			 				   
	scanf("\n%d", &y);									  
	for(x=0; x<=y; x++)													 	 
	{																		
		printf("\n%d <---", x);										   	   
	}																  	  
	if(y<=0)			//Si se ingresa un número negativo, marcará error y volverá al inicio del programa											 	 
	{																	
		puts("Error ingrese un numero positivo y vuelva a intentar");  
		getche();
		system("cls");
		goto Inicio; //Regresa al inicio
	}																
	getche ();											   		   
	return 0;													  
}																 
