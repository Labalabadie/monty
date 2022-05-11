#include "monty.h"
/**
 *_token_string - Gets only numbers from a string and sets global variable num.
 *@str: string to get numbers from.
 *
 * Return: num
 */
int _token_integer(const char *str)
{
	int i = 0, j = 0;
	char *new_str;

	if (!str)
		return (-1);

	new_str = malloc(sizeof(char *));
	for (i = 0; str[i] != '\0'; i++)
	{
		if (j > 0 && str[i] == ' ')
			break;

		if (str[i] > 47 && str[i] < 58)
		{
			new_str[j] = str[i];
			j++;
		}
	}
	if (!new_str[0])
		return (-1);
	new_str[j + 1] = '\0';
	num = atoi(new_str);
	free(new_str);
	return (num);
}
