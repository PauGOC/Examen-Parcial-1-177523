//Programa que busca un numero negativo
#include <stdio.h>
#include <math.h>

int main() {
    int a=1;

	while (1) {
        printf("Ingresa un numero que sea negativo: ");
        scanf("%d", &a);
        
    while (a>0){
    	printf("Ingresa un numero, pero que sea negativo: ");
        scanf("%d", &a);	
    }

    if (a < 0) {
        printf("Gracias por insertar un numero negativo.\n");
        break;
        }
    }

    return 0;
}

