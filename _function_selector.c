#include "monty.h"
/*
 *_function_selector - 
 *@:
 *
 *Return:
 */

int _function_selector(char *opcode)
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
		if (strcmp(selector[i].opcode, opcode) == 0)
		{
			printf("llega aca con %s\n", selector[i].opcode);
			selector[i].f();
			return (0);
		}
		i++;
	}
	return(1); /*if fail to find function*/
}
