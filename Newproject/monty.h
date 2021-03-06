#ifndef MAIN_H
#define MAIN_H
#include <string.h> 
#include <stdio.h>
#include <stdlib.h>

/*STRUCTURES*/
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
	void (*f)();
} instruction_t;


/*EXTRUCTURE FOR GLOBAL INTERGER*/
typedef struct num_s
{
	int n;
	struct num_s *prev;
	struct num_s *next;
} num_t;


/*GLOBAL VARIABLES*/
int num;
num_t **head;

typedef void (*instruct_func)(stack_t **stack, unsigned int line_number);

/*FUNCTIONS FROM SELECTOR*/
void _push(stack_t **stack, unsigned int line_number);





/*FUNCTIONS*/

char ** _read(const char *filename);
instruct_func _function_selector(char *opcode);
char *_token_string(const char *str);
int _token_integer(const char *str);
int _token_integer_linked(const char *str);
char *_token_only_string(const char *str);
char *_token_string_integer(const char *str);
num_t *add_dnodeint_end(const int n);
#endif
