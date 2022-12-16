#include "monty.h"

/**
 * rotl - rotates the stack to the top
 * @stack: pointer to top element of stack
 * @line_number: line of file
 *
 */
void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	(void) line_number;
	if (!stack || !(*stack) || !(*stack)->next)
	{
		return;
	}
	temp = *stack;
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = *stack;
	(*stack)->prev = temp;
	(*stack)->next->prev = NULL;
	*stack = (*stack)->next;
	temp->next->next = NULL;
}
