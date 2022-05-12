#include "monty.h"
#include <stdio.h>
#include <string.h>

unsigned int lineas = 0;
char *command[1000][1000]; 
char *opcode;
char *str;

int main()
{	
    	unsigned int i;


	_read("00.m");
	printf("lineas totales: %d\n", lineas);	
	for (i = 0; i < lineas; i++)
		{		
		str = *command[i];
		opcode = _token_string(str);
		_token_integer(str); /*sets global value num*/
		_function_selector(opcode);/*i cuenta las lineas*/
		}
	printf("com: %s - opcode: %s\n", str, opcode);
	return (0);
}

