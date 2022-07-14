#include "monty.h"

/**
 * sub - subtracts the top element of the stack
 * from the second top element of the stack
 * @stack: pointer to top element on stack
 * @line_number: line of file
 *
 */
void sub(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	int sum;

	if (!stack || !(*stack) || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	sum = temp->next->n - temp->n;
	temp->next->n = sum;
	temp->next->prev = NULL;
	*stack = temp->next;
	free(temp);
}
