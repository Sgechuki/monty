#include "monty.h"

/**
 * pall - prints all the values on the stack
 * starting from the top of the stack.
 * @stack: pointer to top of stack
 * @line_number: line of file
 */
void pall(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	print_all(stack);
}
