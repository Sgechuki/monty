#include "monty.h"

/**
 * free_all - free the stack
 * @stack: pointer to top of stack
 *
 */
void free_all(stack_t **stack)
{
	stack_t *temp1, *temp2;

	temp1 = *stack;
	while (temp1 != NULL)
	{
		temp2 = temp1->next;
		free(temp1);
		temp1 = temp2;
	}
}
