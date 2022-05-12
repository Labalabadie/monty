#include "monty.h"
/**
 *
 *
 */

int main()
{	
	int i;
	char **index;

	index =_read("00.m");
	for (i = 0; i < 2; i++)
	{
		printf("this is in main.%s\n", index[i]);
	}
	return (0);
}

