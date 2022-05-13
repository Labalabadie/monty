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
	stack_t *new_node;
/*
	if (!stack)
		exit ();
*/
	new_node = malloc(sizeof(stack_t));

/*	if (!new_node)
		exit ();
*/
	new_node->n = num;
	new_node->prev = NULL;

	if (*stack)
		{
		(*stack)->prev = new_node;
		new_node->next = *stack;
		}
	else
		new_node->next = NULL;
	printf("Hola, soy parte de la funcion _push%i", line_number);
}
