#include "monty.h"

/**
* add_dnodeint - adds a new node at the beginning of a listint_t list.
* @head: head
* @n: n
*
* Return: the address of the new element or NULL if it failed
*/
void _push(stack_t **stack, unsigned int line_number)
{
	stack_t *new;
	stack_t *h;

	printf("Nro of line: %d\n", line_number);
	if (!*stack)
		printf("Not stack in _push\n");

	new = malloc(sizeof(stack_t));

	printf("aafter malloc\n");
	if (!new)
		printf("Not new, in _push\n");

	if (*stack)
	{
		h = *stack;
		for (; h->next != NULL; h = h->next)
		{
		}
		new->prev = h;
		h->next = new;
	}
	else
	{
		new->prev = NULL;
		*stack = new;

	}
	new->n = num;
	new->next = NULL;
}
