#include "monty.h"

/**
 * pstr - prints the string starting at the top of the stack
 * @stack: pointer to top element on stack
 * @line_number: line of file
 *
 */
void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	(void) line_number;
	if (!stack || !(*stack))
	{
		printf("\n");
		return;
	}
	temp = *stack;
	while (temp && temp->n != 0)
	{
		if (temp->n >= 65 && temp->n <= 90)
		{
			putchar(temp->n);
		}
		else if (temp->n >= 97 && temp->n <= 122)
		{
			putchar(temp->n);
		}
		else
		{
			break;
		}
		temp = temp->next;
	}
	putchar('\n');
}
