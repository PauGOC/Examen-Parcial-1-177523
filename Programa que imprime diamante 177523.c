//Programa que imprime un diamante
#include <stdio.h>
#include <locale.h>

int main() {
	char repetir;
	do{
    	int altura;

    	printf("\n Introduce el número de pisos del árbol:");
    	scanf("%d", &altura);

    	int b =0;
    	int h;
    
    	if (altura > 0) {
        	while (b <= altura) {
            	for (h = 0; h < altura - b; h++) {
                printf(" ");
           		}
            
            	for (h = 0; h < 2 * b - 1; h++) {
                printf(".");
            	}
            
            	printf(" \n");
            	b++;
        	}
        	
        	while (b>=1){
        	for (h = 0; h < altura - b; h++) {
                	printf(" ");
            	}

            	for (h = 0; h < 2 * b - 1; h++) {
               		printf(".");
            	}

            	printf(" \n");
            	b--;	
        	}
        	} 
		

    printf("\n Desea hacer otro árbol? (s/n): \n");
	scanf(" %c", &repetir);

	}
	while (repetir == 's' || repetir=='S');
    
	return 0;
}
