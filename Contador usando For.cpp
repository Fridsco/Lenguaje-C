#include <conio.h>			   //Librer�a que se usar� para la funci�n getche()
#include <stdio.h>			  //Librer�a que se usar� para la funci�n, puts, scanf, etc
#include <windows.h>		//Librer�a que se usar� para la funci�n Sleep (Milisegundos)

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
	if(y<=0)			//Si se ingresa un n�mero negativo, marcar� error y volver� al inicio del programa											 	 
	{																	
		puts("Error ingrese un numero positivo y vuelva a intentar");  
		getche();
		system("cls");
		goto Inicio; //Regresa al inicio
	}																
	getche ();											   		   
	return 0;													  
}																 
