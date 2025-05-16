#include <stdio.h>
#include <stdlib.h>

/*2_Una inmobiliaria realiza cotizaciones sobre un loteo. Se tiene de los mismos los
metros de frente y el largo. El precio del metro cuadrado está en dólares u$s50 y no
cambia.
Realizar un programa el cual ingresando la cotización del dólar, y las medidas
conocidas del lote, calcule el área del mismo y el importe en dólares y en pesos al
momento de la cotización*/

int main () {
	
	float MetroPrecioUSD = 50;
	float Cotizacion = 0;
	float Frente = 0;
	float Largo = 0;
	float Area = 0;
	float Pesos = 0;
	float Dolar = 0;
	
	printf ("Ingrese las medidas del lote de frente: \n");
	scanf("%f", &Frente);
	
	printf ("Ingrese las medidas del lote de largo: \n");
	scanf("%f", &Largo);
	
	Area = Frente * Largo;
	
	printf("Ingrese la cotizacion del dolar en pesos: \n");
	scanf("%f", &Cotizacion);
	
	Pesos = (Cotizacion * MetroPrecioUSD) * Area;
	Dolar = MetroPrecioUSD * Area;
	
	printf("El area del terreno es de: %.2f metros cuadrados \n", Area);
	printf("El precio en USD es de: %.2f \n", Dolar);
	printf("El precio en Pesos es de: %.2f", Pesos);		
	
	
	
	
	
	
}
