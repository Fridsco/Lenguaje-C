#include <stdio.h>
#include <windows.h>
/*
*Fridsco
*Tablas de multiplicar en C, ingresas un número de tipo entero y te devuelve el resultado.
*
*/
main() //Inicio del programa
{
int X, Y, Z; //Declaración de variables.
int msgboxID=MessageBox(NULL, "Programado Por: Fridsco / Github       "," ", MB_ICONWARNING); //Mensaje emergente.
Inicio: //Etiqueta: Al finzalizar el programa regresa al inicio.
printf ("Ingrese un numero para obtener la tabla: "); //Imprime en pantalla.
scanf("%d", &X); //Lee el teclado y lo guarda en la variable X.
printf("\n"); //Imprime en pantalla un salto de línea.
for(Y=1; Y<=10; Y++) //Ciclo flor con la variable FR (FOR) y empieza el conteo desde 1 hasta llegar al 10.
{
	Z=X*Y; //Z adquiere el valor de la multiplicación de X por Y, es decir, X se multiplica 10 veces que es lo vale Y.
	printf("--> %d X %d = %d\n", X, Y, Z); //Imprime en pantalla la multiplicación de Y con X
}
printf("\n"); //Imprime en pantalla un salto de línea.
system("pause"); //Hace una pausa hasta que se precione cualquier letra.
system("cls"); //Limpia la pantalla.
goto Inicio; //Regtresa al inicio del programa (Etiqueta).
}
