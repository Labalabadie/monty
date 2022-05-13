#include "monty.h"
/**
 *add_dnodeint_end - adds a new node at the end of a num_t list.
 *@head: Pointer to pointer to list
 *@n: value of new node
 *Return: adress to new node
 */
num_t *add_dnodeint_end(const int n)
{
	num_t  *new;
	num_t *h;

	if (!head)
		return (NULL);

	new = malloc(sizeof(num_t));

	if (!new)
		return (NULL);

	if (*head)
	{
		h = *head;
		for (; h->next != NULL; h = h->next)
		{
		}
		new->prev = h;
		h->next = new;
	}
	else
	{
		new->prev = NULL;
		*head = new;

	}
	new->n = n;
	new->next = NULL;
	return (new);
}
