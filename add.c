#include "monty.h"

/**
 * add - adds the top two elements of the stack
 * @stack: pointer to top part of stack
 * @line_number: line of file
 *
 */
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	int sum;

	if (!stack || !(*stack) || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	sum = temp->n + temp->next->n;
	temp->next->n = sum;
	temp->next->prev = NULL;
	*stack = temp->next;
	free(temp);
}
