#include "monty.h"
/**
 *
 *
 */

int main()
{	
	int i = 0;
	char **index;
	stack_t **stack = NULL;

	instruct_func function;

	index =_read("00.m");

	for (i = 0; index[i] != NULL; i++)
	{
		printf("This is from main, and index right now is: %s\n", index[i]);
	}
	for (i = 0; index[i] != NULL; i++)
	{
		function = _function_selector(index[i]);
		printf("Exito en el retorno de funtion selector\n");
		function(stack, i);
	}

	return (0);
}

