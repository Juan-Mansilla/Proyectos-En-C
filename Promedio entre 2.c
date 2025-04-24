#include <stdio.h>
#include <stdlib.h>


int main() {

	printf("ingrese el primer dos numeros enteros, distintos para hacer un promedio \n");
	
	int numero1 = 0;
	int numero2 = 0;
	int Suma = 0;
	float Promedio = 0;
	
	scanf("%d", &numero1);
	scanf("%d", &numero2);
	
	Suma = numero1 + numero2;
	
	Promedio = Suma/2.0;
	
	printf("El promedio es de %.2f ",Promedio); 

}
