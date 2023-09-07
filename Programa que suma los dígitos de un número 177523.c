// Programa que suma dígitos de un número dado//

#include <stdio.h>
#include <math.h>

int main() {
	char repetir;
	do{
    	int num;
		int suma = 0;
		int digitos;

    	printf("Ingresa un numero: ");
    	scanf("%d", &num);

    	if (num < 0)
		num : -num;

    		while (num > 0) {
        		digitos = num%10;
        		suma += digitos;
        		num /= 10;
    		}

    	printf("La suma de los digitos es: %d\n", suma);
	
	
    printf("\n Desea hacer otra suma? (s/n): \n");
	scanf(" %c", &repetir);

	}
	while (repetir == 's' || repetir=='S');
   
    return 0;
}

