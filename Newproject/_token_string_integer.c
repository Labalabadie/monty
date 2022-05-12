#include "monty.h"
/**
 *_token_string_integer- makes a new token from _token_string y _token_integer.
 *@str: string to tokenize from
 *
 * Return: "opcode n"
 */

char *_token_string_integer(const char *str)
{
	char *t_s = NULL, *t_i = NULL;

	t_s = malloc(sizeof(char *));
	t_s = _token_string(str);

	_token_integer(str);
	t_i = itoa(num);

	t_s = strcat(t_s, " ");
	t_s = strcat(t_s, t_i);
	return(t_s);
}
