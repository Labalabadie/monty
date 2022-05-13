#include "monty.h"

/**
 * func_cheq -  checks opcode and returns the correct function
 * @str: the opcode
 *
 * Return: returns a function, or NULL on failure
 */
instruct_func _function_selector(char *opcode)
{
	int i;
	int n = 0;

	instruction_t selector[] = {
		{"push", _push},
/*		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"add", _add},
		{"nop", _nop},
		{"sub", _sub},*/
		{NULL, NULL},
	};

	i = 0;
	while (selector[i].f != NULL) 
	{

		n = strcmp(selector[i].opcode, opcode);
		printf("Hello from while from _function_selector, and the value of n is :%d\nopcode:%s\nselector%i opcode: %s", n, opcode, i, selector[i].opcode);
		if (opcode != NULL && strcmp(selector[i].opcode, opcode) == 0)
		{
			printf("Hello from _function_selector\n");
			return (selector[i].f);
			printf("Error in _function selector\n");
		}
			i++;
	}

	return (selector[i].f);
}
