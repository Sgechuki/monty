#include "monty.h"

/**
 * print_all - prints all the values on the stack
 * starting from the top of the stack
 * @stack: pointer to top element on stack
 *
 */
void print_all(stack_t **stack)
{
	stack_t *temp;

	temp = *stack;
	while (temp != NULL)
	{
		printf("%i\n", temp->n);
		temp = temp->next;
	}
}
