#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Ingresar el valor de la hora y el tiempo trabajado por un comerciante, calcular su
sueldo e imprimirlo*/

int main () {
	
	float ValorHora = 0;
	int TiempoTrabajo = 0;
	float Sueldo = 0;
	
	printf("Ingrese el valor por hora de trabajo: \n");
	
	scanf("%f", &ValorHora);

	printf("Ingrese las horas trabajadas: \n");
	
	scanf("%d", &TiempoTrabajo);
	
	Sueldo = ValorHora * TiempoTrabajo;
	
	printf ("El Sueldo calculado es de: %.2f Pesos \n", Sueldo);
} 
