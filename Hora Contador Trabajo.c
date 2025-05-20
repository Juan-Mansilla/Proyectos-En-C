#include <stdio.h>
#include <stdlib.h>

/*Ingresar el tiempo trabajado por un contador y considerando que el valor de la hora es
de 800 pesos, calcular su sueldo e imprimirlo*/


int main () {
	
	int ValorHora = 800;
	int TiempoTrabajo = 0;
	int Sueldo = 0;
	
	printf("Ingrese las horas trabajadas: \n");
	
	scanf("%d", &TiempoTrabajo);
	
	Sueldo = ValorHora * TiempoTrabajo;
	
	printf ("El Sueldo calculado es de: %d Pesos \n", Sueldo);
} 
