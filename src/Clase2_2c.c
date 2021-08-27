/*
 ============================================================================
 Name        : Clase2_2c.c
 Author      : Flaco
 Version     :
 Copyright   : GNU
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define LIMPIAR_BUFFER_ENTRADA()  fflush(stdin)  // MACRO

#define EDAD_DE_ADULTO	18

int main(void)
{
	// WINDORRRRRRR
	setbuf (stdout,NULL);
	//______________

	// TIPO NOMBRE ;
	int a=0; // numeros enteros

	LIMPIAR_BUFFER_ENTRADA(); // limpiar el buffer de entrada antes de leer

	char respuesta;

	do
	{
		printf("Continuar?s-n");
		fflush(stdin);
		scanf("%c",&respuesta);
	}
	while(respuesta=='s');

	return EXIT_SUCCESS;
}
