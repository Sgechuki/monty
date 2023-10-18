#include "monty.h"

/**
 * rotr - rotates the stack to the bottom
 * @stack: pointer to top element of stack
 * @line_number: line of file
 *
 */
void rotr(stack_t **stack, unsigned int line_number)
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
	temp->prev->next = NULL;
	temp->next = *stack;
	(*stack)->prev = temp;
	temp->prev = NULL;
	*stack = temp;
}
