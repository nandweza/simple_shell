#include "main.h"
/**
 * exec_line - Executes the program.
 * @args: Pointer pointing to arguments.
 *
 * Return: On success 1.
 */
int exec_line(char **args)
{
	int status;
	pid_t pid;

	pid = fork();

	if (pid == 0)
	{
		if (execve(args[0], args, NULL) == -1)
			perror(args[0]);
	}
	else
		wait(&status);

	return (1);
}
