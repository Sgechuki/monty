#include "monty.h"

/**
 * push - pushes an element to the stack
 * @stack: pointer to top of stack
 * @line_number: line of file
 *
 */
void push(stack_t **stack, unsigned int line_number)
{
	char *ptr = global.value;

	if (isdigit(ptr) != 0)
	{
		add_node(stack, atoi(ptr));
	}
	fprintf(stderr, "L%d: usage: push integer\n", line_number);
	exit(EXIT_FAILURE);
}
