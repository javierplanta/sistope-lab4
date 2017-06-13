#include "functions.h"

/*
	Laboratorio 4 - Sistemas operativos
  	USACH 1-2017
  	Integrantes:
  	- Kevin Alvarez
  	- Javier Vasquez
  	Descripción:
  	El presente laboratorio consiste en recrear politicas
  	de reemplazo de páginas, y establecer diferencias.
*/

int main(int argc, char** argv)
{

	int m;
	char *archivo_entrada = (char*)malloc(sizeof(char) * 100);
	char *archivo_salida = (char*)malloc(sizeof(char) * 100);

	/*  Realizo el get opt de los valores de entrada hechos por la consola */
	call_getopt(argc, argv, &m, &archivo_entrada, &archivo_salida);

	printf("numero de marcos: %d\nnombre archivo de entrada: %s\nnombre archivo de salida: %s\n", m,archivo_entrada,archivo_salida);

	return 0;
}
