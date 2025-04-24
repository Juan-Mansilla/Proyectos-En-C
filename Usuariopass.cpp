#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	char UsuarioC[] = "Juan";
	char PassC[] = "j123";
	
	char Usuario[30] = "";
	char Pass[30] = "";
	
	printf("Ingrese nombre de usuario \n");
	
	scanf("%s", Usuario);
	
	printf("Ahora ingrese su pass \n");
	
	scanf("%s", Pass);
	
    if(strcmp(Usuario, UsuarioC) == 0 && strcmp(Pass, PassC) == 0){
        printf("Bienvenido %s ", UsuarioC);
	} else {
		printf("Usuario o pass incorrectas");
	}

}

