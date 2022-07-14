#include "monty.h"

/**
 * mul - multiplies the second top element of the stack
 * with the top element of the stack
 * @stack: pointer to top element of stack
 * @line_number: line of file
 *
 */
void mul(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	int mul;

	if (!stack || !(*stack) || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	mul = temp->n * temp->next->n;
	temp->next->n = mul;
	temp->next->prev = NULL;
	*stack = temp->next;
	free(temp);
}
