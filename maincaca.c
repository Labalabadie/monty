#include "monty.h"
int main()
{
	char *a;
	char *str = "push      111 11";
	a = _token_string(str);
	printf("%s", a);
	return (0);
}
