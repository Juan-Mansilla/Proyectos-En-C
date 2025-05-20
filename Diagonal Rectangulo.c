#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*5- El usuario debe poder ingresar los lados de un rectangulo y el programa calcula con
esos datos la diagonal principal del rectangulo, superficie y perametro. Mostrar al
usuario los resultado*/

int main () {
	
	float Base = 0;
	float Altura = 0;
	float Diagonal = 0;
	float Area = 0;
	float Perimetro = 0;
	
	printf("Ingrese la medida de la base del rectangulo: \n");
	
	scanf("%f", &Base);

	printf("Ingrese la medida de la altura del rectangulo: \n");
	
	scanf("%f", &Altura);
	
	Perimetro = (2 * Base) + (2 * Altura);
	
	Area =  Base * Altura; 
	
	Diagonal = sqrt(pow(Base, 2) + pow(Altura, 2));
	
	printf ("El perimetro de su rectangulo es de %.2f \n", Perimetro);
	printf ("El area de su rectangulo es de %.2f \n", Area);
	printf ("La diagonal de su rectangulo es de %.2f \n", Diagonal);
} 
