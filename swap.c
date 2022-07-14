#include "monty.h"

/**
 * swap - swaps the top two elements of the stack
 * @stack: pointer to top of stack
 * @line_number: line of file
 *
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *temp1, *temp2;

	if (!stack || !(*stack) || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp1 = *stack;
	temp2 = (*stack)->next;
	temp1->next = temp2->next;
	temp1->prev = temp2;
	temp2->next = temp1;
	temp2->prev = NULL;
	*stack = temp2;
}
