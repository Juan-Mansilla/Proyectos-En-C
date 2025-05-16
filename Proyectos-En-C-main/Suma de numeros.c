#include <stdio.h>
#include <stdlib.h>


int main() {

	printf("ingrese el primer dos numeros distintos para la suma \n");
	
	int numero1 = 0;
	int numero2 = 0;
	
	scanf("%d", &numero1);
	scanf("%d", &numero2);
	
	int resultado = numero1 + numero2;
	
	printf("%d",resultado); 

}
