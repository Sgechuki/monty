#include "monty.h"
#include <ctype.h>

/**
 * push - pushes an element to the stack
 * @stack: pointer to top of stack
 * @line_number: line of file
 *
 */
void push(stack_t **stack, unsigned int line_number)
{
	char *ptr = global.value;

	if !ptr || (isnumber(ptr) == 0)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	add_node(stack, atoi(ptr));
}

/**
 * isnumber - evaluates whether string can be converted to number
 * @str: pointer to string
 * Return: 1 (True) or 0 (False)
 */
int isnumber(char *str)
{
	if (*str == '\0')

	{
		return (0);
	}
	if (*str == '-' || *str == '+')
	{
		str++;
	}
	while (*str)
	{
		if (isdigit(*str) == 0)
		{
			return (0);
		}
		str++;
	}
	return (1);
}
