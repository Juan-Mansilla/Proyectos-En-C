#include <stdio.h>
#include <stdlib.h>


int main() {

	printf("ingrese el primer tres numeros distintos para la suma \n");
	
	float numero1 = 0;
	float numero2 = 0;
	float numero3 = 0;
	
	scanf("%f", &numero1);
	scanf("%f", &numero2);
	scanf("%f", &numero3);
	
	float resultado = numero1 + numero2 + numero3;
	
	printf("%f",resultado); 

}
