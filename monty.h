#ifndef MAIN_H
#define MAIN_H
#include <string.h> 
#include <stdio.h>
#include <stdlib.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

int num;
unsigned int lineas;
char *command[1000][1000];
char *opcode;
char *str;


ssize_t _read(const char *filename);
int _function_selector(char *opcode, stack_t **stack, unsigned int line_number);
stack_t *_push(stack_t **head, const int n);
char *_token_string(const char *str);
int _token_integer(const char *str);
#endif
