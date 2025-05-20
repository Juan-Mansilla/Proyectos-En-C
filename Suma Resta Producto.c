#include <stdio.h>
#include <stdlib.h>

/*Ingresar dos valores, calcular su suma, su producto y la resta del 1ro menos el 2do
valor ingresado, imprimir los resultados*/

int main () {
	
	float Num1 = 0;
	float Num2 = 0;
	float Suma = 0;
	float Resta = 0;
	float Producto = 0;
	
	printf("Ingrese su primer numero: \n");
	
	scanf("%f", &Num1);

	printf("Ingrese su segundo numero: \n");
	
	scanf("%f", &Num2);
	
	Suma = Num1 + Num2;
	Resta = Num1 - Num2;
	Producto = Num1 * Num2;
	
	printf ("La suma es igual a: %.2f \n", Suma);
	printf ("La resta es igual a: %.2f \n", Resta);
	printf ("El producto es igual a: %.2f \n", Producto);
} 
