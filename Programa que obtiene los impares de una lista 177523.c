// Programa que obtine los impares de una lista //

#include <stdio.h>
#include <math.h>

int main (){
	char repetir;
	
	do {
	int a;
	int b=1;
	
	printf ("Ingrese un número :\n");
	scanf("%d", &a);

	printf("\nLos números impares de este número son:\n");
	
	if (a%2==0){
		printf ("%d\n",a-1);	
		a=a-3;
	}
	
	while (a%2 ==1)
		{
			printf("%d \n",a--);
			a=a-1;
	}
	printf("\n Desea repetir el programa? (s/n): \n");
	scanf(" %c", &repetir);

	}
	while (repetir == 's' || repetir=='S');
	return 0;
}
