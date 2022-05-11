#include "monty.h"
/**
 *_token_string - Gets the first word in a string, ignores all spaces.
 *@str: string to get first word of.
 *
 * Return: first word.
 */

char *_token_string(const char *str)
{
	
	char *new_str, *chr;
	int flag = 0, i;

	if (!str)
		return (NULL);

	chr = malloc(sizeof(char *));
	new_str = malloc(sizeof(char *));
	for (i = 0; str[i] != '\0' || (flag == 1 && str[i] == ' '); i++)
	{
		if (flag == 1 && str[i] == ' ')
			break;
		if (str[i] != ' ')
		{
			chr[0] = str[i];
			flag = 1;
			new_str = strncat(new_str, chr, 1);
		}
	}

	if (flag == 0)
		return (NULL); /*only spaces in str.*/

	new_str[i] = '\0';
	free(chr);
	return (new_str);
}
