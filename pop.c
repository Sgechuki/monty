#include "monty.h"

/**
 * pop - removes the top element of the stack
 * @stack: pointer to top of stack
 * @line_number: line of file
 *
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (!(*stack) || !stack)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	if (temp->next == NULL)
	{
		free(temp);
		*stack = NULL;
	}
	else
	{
		temp->next->prev = NULL;
		*stack = temp->next;
		free(temp);
	}
}
