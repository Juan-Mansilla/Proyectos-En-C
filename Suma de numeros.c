#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

	printf("ingrese el primer dos numeros distintos para la suma \n");
	
	int numero1 = 0;
	int numero2 = 0;
	
	scanf("%d", &numero1);
	scanf("%d", &numero2);
	
	int resultado = numero1 + numero2;
	
	printf("%d",resultado); 

}
