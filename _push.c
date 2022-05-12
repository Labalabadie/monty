#include "monty.h"

/**
* add_dnodeint - adds a new node at the beginning of a listint_t list.
* @head: head
* @n: n
*
* Return: the address of the new element or NULL if it failed
*/

stack_t _push(stack_t **head, unsigned int line_number)
{

	stack_t *new_node;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(stack_t));

	if (!new_node)

		return (NULL);
	new_node->n = num;
	new_node->prev = NULL;

	if (*head)
		{
		(*head)->prev = new_node;
		new_node->next = *head;
		}
	else
		new_node->next = NULL;
	*head = new_node;
	printf("Hola, soy parte de la funcion _push");
	return (new_node);
}
