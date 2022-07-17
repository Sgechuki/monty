#include "monty.h"

/**
 * pchar - prints the char at the top of the stack
 * @stack: top element on stack
 * @line_number: line of file
 *
 */
void pchar(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (!stack || !(*stack))
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	else if ((*stack)->n < 0 && (*stack)->n > 255)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	putchar(temp->n);
	putchar('\n');
}
