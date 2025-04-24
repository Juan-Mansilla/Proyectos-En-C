#include <stdio.h>
#include <stdlib.h>

int main() {

	char nombre[50] = "";

	printf("ingrese un nombre para dar la bienvenida \n");
	
	scanf("%s", &nombre);
	
	printf("Gracias por venir %s, un gusto",nombre); 
	
}

