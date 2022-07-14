#include "monty.h"

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of the arguments
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	char line[100], *ptr1;
	stack_t *top = NULL;
	FILE *fp;
	unsigned int line_no = 1;
	instruction_t code[1], opc[] = OPCODES;

	if (argc != 2)
		errargc();
	fp = fopen(argv[1], "r");
	if (fp == NULL)
		erropen(argv[1]);
	while (fgets(line, sizeof(line), fp))
	{
		if (*line == '\n')
		{
			line_no++;
			continue;
		}
		ptr1 = strtok(line, " \t\n");
		if (!ptr1)
		{
			line_no++;
			continue;
		}
		global.value = strtok(NULL, " \t\n");
		if (strcmp(ptr1, "push") == 0 && global.value == NULL)
		{
			fprintf(stderr, " L%d: usage: push integer\n", line_no);
			exit(EXIT_FAILURE);
		}
		code[0] = instruct(opc, ptr1, line_no);
		code[0].f(&top, line_no);
		line_no++;
	}
	free_all(&top);
	fclose(fp);
	return (0);
}

/**
 * errargc - error message when arguments are less
 *
 */
void errargc(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}

/**
 * erropen - error message when can't open file
 * @s: pointer to file
 *
 */
void erropen(char *s)
{
	fprintf(stderr, "Error: Can't open file %s\n", s);
	exit(EXIT_FAILURE);
}

/**
 * instruct - splits line using strtok
 * @opc: struct
 * @in: pointer to value to be stacked or queued
 * @l: line of file
 * Return: struct
 */
instruction_t instruct(instruction_t opc[], char *in, unsigned int l)
{
	int i;

	for (i = 0; opc[i].opcode != NULL; i++)
	{
		if (strcmp(in, opc[i].opcode) == 0)
		{
			return (opc[i]);
		}
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", l, in);
	exit(EXIT_FAILURE);
}
