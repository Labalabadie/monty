#include "monty.h"
/**
 *_read - Read from a file and returns an index with tokenized monty opcode.
 *@filename: name of the file.
 *
 * sets global variable num each time._token_integer runs.
 *
 *Return: index. each string with '\0' at end.
 */
char **_read(const char *filename)
 {
	char *buffer = NULL;
	size_t n = 0;
  	FILE *fp;
	int read = 0;
	int i = 0;
	char **index;

	index = malloc(sizeof (char **));
	fp = fopen(filename,"r");
	if (fp == NULL)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}	
	while (read != -1)
	{
	read = getline(&buffer, &n, fp);
		if (read != -1)
		{
			_token_integer(buffer);
			index[i] = malloc(sizeof(char*));
			index[i] =  _token_string_integer(buffer);
			printf("this is opcode: %s\nthis is variable global num:%i\n", index[i], num);
			i++;
		}
	}
	fclose(fp);
	return(index);
}
