#include "monty.h"

/**
 * nop -  doesn’t do anything
 * @stack: pointer to top element on stack
 * @line_number: line of file
 *
 */
void nop(stack_t **stack __attribute__((unused)), unsigned int line_number)
{
	(void) line_number;
}
