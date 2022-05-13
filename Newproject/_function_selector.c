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
		if (opcode != NULL && strcmp(selector[i].opcode, opcode) == 0)
			return (selector[i].f);
		i++;
	}

	return (selector[i].f);
}
