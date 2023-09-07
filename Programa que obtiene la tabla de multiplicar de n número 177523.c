#include <stdio.h>

int main() {
    char repetir;
	do{
		
		int num;
		int a;


    	printf("Ingrese un número para obtener su tabla de multiplicar (del 1 al 50): ");
    	scanf("%d", &num);

    
    	printf("Su tabla de multiplicar de %d es:\n", num);
    	for (a = 1; a <= 50; a++) {
       		printf("%d x %d = %d\n", num, a, num * a);
    	}
	
	printf("\n Desea hacer otra tabla de multiplicar? (s/n): \n");
	scanf(" %c", &repetir);

	}
	while (repetir == 's' || repetir=='S');
   
    return 0;
}

