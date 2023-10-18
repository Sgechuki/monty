#include "monty.h"

/**
 * pint -  prints the value at the top of the stack
 * @stack: pointer to top of stack
 * @line_number: line of file
 *
 */
void pint(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	printf("%d\n", temp->n);
}
