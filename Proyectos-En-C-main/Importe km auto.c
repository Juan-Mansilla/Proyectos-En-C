#include <stdio.h>
#include <stdlib.h>

/*1_Un automóvil realiza su carga de combustible. El propietario conoce su autonomía y
ésta no cambia. Por ejemplo 14km/l.
Realizar un programa el cual ingresando el precio por litro de combustible y la
cantidad que cargo, calcule el IMPORTE a pagar y los KILOMETROS a recorrer con dicha
carga.*/

int main() {

	int Autonomia = 14;
	float Precio = 0;
	float Cantidad = 0;
	float KmRecorrer = 0;
	float Importe = 0;
	
	printf("Ingrese la cantidad de litros de combustible a cargar \n");
	
	scanf("%f", &Cantidad);
	
	printf ("Ingrese el precio del combustible \n");
	
	scanf("%f", &Precio);
	
	Importe = Cantidad * Precio;
	KmRecorrer = Cantidad * Autonomia;
	
	printf("La cantidad de km a recorrer es de: %.2f \n", KmRecorrer);
	printf("El importe a pagar es de: %.2f", Importe);

}
