#include "main.h"

/**
 * main - a Simple Unix interpreter.
 *
 * Description: Displays a prompt and wait for the user to type a command.
 * Split the input into arguments and execute it.
 * Prints result on screen then display prompt again.
 *
 * Return: On success 1.
 */
int main(void)
{
	char *buffer;
	char **args;
	int status = 1;

	while (status)
	{
		printf("cisfun$ ");
		buffer = get_line();
		args = split_line(buffer);
		status = exec_line(args);
	}

	free(buffer);
	free(args);

	return (1);
}
