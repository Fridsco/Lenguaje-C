#include<conio.h>
#include<stdio.h>
#include <windows.h>

/* 
*	El siguiente código es de una pila, se puede ingresar datos, sacar, y ver el tamaño de la pila
* 	Fridsco
*/
char Enie = 164;
char E = 130;
char O = 162;
char A = 160;
char Signo = 168;

#define max 5
struct Pila
{ int tope;
int dato[max];
};

typedef struct Pila tipoPila;
void push (tipoPila * pila, int x)
{ pila->dato[pila->tope++]=x;}
int pop (struct Pila * pila)
{return(pila->dato[--pila->tope]);}
int vacia(struct Pila * pila)
{if (pila->tope==0) return (1); else return(0);}
int llena(struct Pila * pila)
{ if (pila->tope==max) return(1); else return(0);}
int main()
{ struct Pila pila={0};
char op;
int num;
do
{
printf("1) Ingresar un elemento\n");
printf("2) Sacar un elemento\n");
printf("3) Tama%co de la Pila\n", Enie);
printf("4) Salida\n");
printf("\nOpci%cn: ", O); op=getche();
switch(op)
{ case '1': if(!llena(&pila) )
{ 
system("cls");
printf("\n%cQu%c dato desea ingresar?\n",Signo, E);
scanf("\n%d",&num);
printf("Dato ingresado.\n");
push(&pila,num);
system("cls");
}
else
{ 
system("cls");
printf("\nAtenci%cn, la pila est%c LLena", O, A);
getch();
}
break;
case '2': if(!vacia(&pila) )
printf("\n%d",pop(&pila));
else
getche();
//printf("\n\nLa pila est%c vacia", A);
getch();
system("cls");
break;
system("cls");
case '3': printf("\nHay %d datos",pila.tope, num);
getch();
system("cls");
case '4': break;
}
}while(op!='4');
return 0;
}
