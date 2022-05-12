#include "monty.h"
/*
 *_function_selector - 
 *@:
 *
 *Return:
 */

int _function_selector(char *opcode, stack_t **stack, unsigned int line_number)
{
	int i;

	instruction_t selector[] =
	{
		{"push", _push},
	/*	{"pop", _pop},*/
		{NULL, NULL},
	};

	while (selector[i].opcode)
	{
		if (strcmp(selector[i].opcode, opcode))
		{
			if (selector[i].f(_push(stack, line_number) == 0)
			{
				return (0); /*success, function executed*/
			}
			else
			{
				return (1); /*if fail to run function*/
			}
		}
		i++;
	}
	return(1); /*if fail to find function*/
}
