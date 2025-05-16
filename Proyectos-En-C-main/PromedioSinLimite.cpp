#include <stdio.h>
#include <stdlib.h>


int main() {

	int *Numeros = 0;
	int Suma = 0;
	float Promedio = 0;
	int X, i = 0;
	
	printf("Ingrese la cantidad de numeros para la lista \n");
	
	scanf("%d", &X);
	
	//reservar memoria dinamica *
	Numeros = (int*) malloc(X * sizeof(int));
	
	 if (Numeros == NULL) {
        printf("No se pudo asignar memoria \n");
        return 1;
    }
	
	for (i = 0; i < X; i++){
		
		printf("Ingrese un numero \n");
		
		scanf("%d", &Numeros[i]);
		
		Suma = Suma + Numeros[i]; 	
	} 
	
	Promedio = Suma/X;
	
	printf("El promedio es de %.2f ", Promedio);	
	
	free(Numeros);

}
