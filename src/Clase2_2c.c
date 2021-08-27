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
	float f; // numeros con decimales
	char c;  // 1 caracter = 1 letra = 1 simbolo.

	printf("Ingresame tu eda':");

	LIMPIAR_BUFFER_ENTRADA(); // limpiar el buffer de entrada antes de leer
	scanf("%d",&a); // leemos
	printf("Ingresaste la edad:%d",a);

	// bUCLES
	// while
	// for
	// do while

	// CUALQUIERAAAA SE PUEDE USAR PARA CUALQUIER COSA
	// SON EQUIVALENTES

	// generalemte:
	// si se cuantas veces voy a iterar -> for
	// si no se -> while
	// primero quiero iterar y despues preguntar por la condicion -> do while

	char respuesta;

	do
	{
		// slfhksdjjfksdkjh
		printf("Continuar?s-n");
		fflush(stdin);
		scanf("%c",&respuesta);
	}
	while(respuesta=='s');



	return EXIT_SUCCESS;
}
