#include "monty.h"
/**
 *_read - Reads from filename and sets an index with strtok,one item per line.
 *@filename: Name of the file to be read, sent from main.c
 *
 *Return: Total amount of lines.
 */

ssize_t _read(const char *filename)
{
    FILE *archivo = fopen(filename, "r");/* abre en formato lectura *.m*/
    char buffer[1000];/*largo maximo de caracteres en una linea a leer*/

    int cont = 0;

    while (fgets(buffer, 1000, archivo))
    {
        strtok(buffer, "\n");
		memcpy(command[cont], buffer, 1000); /* sets global variable command as an array of strings*/
		cont++;
    }
	lineas = cont;
	
    return (lineas);
}
