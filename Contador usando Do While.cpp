#include <conio.h>	
#include <stdio.h>		
int main()																					   
{						  																  
	int x, y, z;		 																 
	puts("Este programa cuenta del cero hasta el numero que se le indique:");			
	puts("ingrese un numero de tipo entero:");									   	   
	scanf("\n%d", &y);															  	  
		do{													 	 			 
		printf("%d", x);										   	   		
		x++;															   
		printf("\n");													  
	}																	 
	while(x<=y);														
	printf("\n...Finalizado...");									   
	getche ();													     
	return 0;													  	
}
