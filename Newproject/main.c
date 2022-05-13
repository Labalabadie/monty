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
		function = _function_selector(_token_only_string(index[i]));
		function(stack, i);
	}

	return (0);
}

