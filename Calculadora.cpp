#include <conio.h>
#include <stdio.h>
#include <windows.h>
int main()
{
	int x, y, z;		 										
	Inicio:
	system("cls");
	puts("Este programa realiza la multipliacion de dos numeros");
	printf("\n\nIngrese un dato: ");
	scanf("%d", &x);
	printf("\nIngrese un segundo dato: ");				 	
	scanf("%d", &y);
	z=x*y;
	printf("\nEl resultado de la multiplicación es: %d", z);
	getche();
	goto Inicio;
}
