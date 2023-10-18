#include "monty.h"

/**
 * divi - divides the second top element of the stack by
 * the top element of the stack
 * @stack: pointer to top element of stack
 * @line_number: line offile
 *
 */
void divi(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	int div;

	if (!stack || !(*stack) || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	if (temp->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	div = temp->next->n / temp->n;
	temp->next->n = div;
	temp->next->prev = NULL;
	*stack = temp->next;
	free(temp);
}
