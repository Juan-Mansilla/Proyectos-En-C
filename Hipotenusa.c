#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*4- Solicitar ingresar dos lados de un triangulo rectangulo y calcular, la hipotenusa, el
perimetro, la superficie. Imprima los resultados de las operaciones solicitadas.*/

int main () {
	
	float CatetoOp = 0;
	float CatetoAd = 0;
	float Perimetro = 0;
	float Area = 0;
	float Hipotenusa = 0;
	
	printf("Ingrese la medida del cateteo opuesto: \n");
	scanf("%f", &CatetoOp);
	
	printf("Ingrese la medida del cateteo adyacente: \n");
	scanf("%f", &CatetoAd);
	
	Hipotenusa = sqrt(pow(CatetoOp, 2) + pow(CatetoAd, 2));
	
	Perimetro = CatetoAd + CatetoOp + Hipotenusa;
	
	Area = (CatetoAd * CatetoOp)/2; 
	
	printf("La hipotenusa es de %.2f centrimetros \n", Hipotenusa);
	printf("El perimetro es de %.2f centrimetros \n", Perimetro);
	printf("El area es de %.2f centrimetros cuadrados \n", Area);	
	
	
}

