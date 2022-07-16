#include "monty.h"

/**
 * mod - computes the rest of the division of the second top
 * element of the stack by the top element of the stack
 * @stack: pointer to top element of stack
 * @line_number: line of file
 *
 */
void mod(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	int mod;

	if (!stack || !(*stack) || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	else if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	mod = temp->next->n % temp->n;
	temp->next->n = mod;
	temp->next->prev = NULL;
	*stack = temp->next;
	free(temp);
}
