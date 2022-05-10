#include "monty.h"
/**
 *_token_string - Gets the first word in a string.
 *@str: string to get first word of.
 *
 * Return: word.
 */

char *_token_string(const char *str)
{
	char *new_str = "";
	int flag = 0, i;

	for (i = 0; str[i] != '\0' || (flag = 1 && str[i] == ' '); i++)
	{
		if (str[i] != ' ')
		{
			flag = 1;
			new_str = strncat(new_str, str, 1);
		}
	}
	return (new_str);
}
