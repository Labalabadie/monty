#include "monty.h"
#include <stdio.h>
#include <string.h>

int lineas = 0;
char command[1000][1000]; 
char *a;
char *str;

ssize_t _read(const char *filename)
{
    FILE *archivo = fopen(filename, "r");
    char buffer[1000];

	int cont = 0;

  
    while (fgets(buffer, 1000, archivo))
    {
        
        strtok(buffer, "\n");
		memcpy(command[cont], buffer, 1000);
		
		cont++;
		
		

    }

	lineas = cont;
	
    return (lineas);
}

int main()



{	
	_read("00.m");


	printf("lineas %d\n", lineas);	
    	int i;
	for (i = 0; i < lineas; i++)
		{		
		str = command[i];
		a = _token_string(str);
		}
	printf("com: %s - a: %s\n", command[i], a);
	printf("str: %s", str);
	return (0);
}

