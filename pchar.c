#include "monty.h"

/**
 * pchar - prints the char at the top of the stack
 * @stack: top element on stack
 * @line_number: line of file
 *
 */
void pchar(stack_t **stack, unsigned int line_number)
{
	if (!stack || !(*stack))
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	else if ((*stack)->n >= 65 && (*stack)->n <= 90)
	{
		putchar((*stack)->n);
		putchar('\n');
	}
	else if ((*stack)->n >= 97 && (*stack)->n <= 122)
	{
		putchar((*stack)->n);
		putchar('\n');
	}
	else
	{
	fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
	exit(EXIT_FAILURE);
	}
}
