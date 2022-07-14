#include "monty.h"

/**
 * add_node -  pushes an element to the stack
 * @stack: pointer to first element on stack
 * @i: value of new node
 * Return: pointer to top of stack
 */
stack_t *add_node(stack_t **stack, int i)
{
	stack_t *node, *temp;

	node = malloc(sizeof(stack_t));
	if (node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	node->n = i;
	node->prev = NULL;
	node->prev = NULL;
	temp = *stack;
	if (*stack == NULL)
	{
		*stack = node;
		return (*stack);
	}
	else
	{
		temp->prev = node;
		node->next = temp;
		*stack = node;
	}
	return (*stack);
}
