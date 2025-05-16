#include <stdio.h>
#include <stdlib.h>

/*3- Ingresar los lados de un triangulo calcular su perimetro e imprimirlo.*/

int main () {
	
	float Base = 0;
	float Lado1 = 0;
	float Lado2 = 0;
	float Perimetro = 0;
	
	printf("Ingrese la medida de la base del triangulo: \n");
	
	scanf("%f", &Base);

	printf("Ingrese la medida de un lado del triangulo: \n");
	
	scanf("%f", &Lado1);
	
	printf("Ingrese la medida del otro lado del triangulo: \n");
	
	scanf("%f", &Lado2);
	
	Perimetro = Base + Lado1 + Lado2;
	
	printf ("El perimetro de su triangulo es de %.2f", Perimetro);

}
