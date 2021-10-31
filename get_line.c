#include "main.h"

/**
 * get_line - Read entire line from stream into a buffer.
 * Return: Buffer containing line read.
 */
char *get_line()
{
	char *line = NULL;
	int bytes_size;
	size_t len = 0;

	bytes_size = getline(&line, &len, stdin);
	*(line + strlen(line) - 1) = '\0';

	if (bytes_size < 0)
		perror("Error:");

	return (line);
}

/**
 * split_line - Splits a string by a given delimiter.
 * @line: String to be splitted;
 * Return: An array of pointers to parsed string.
 */
char **split_line(char *line)
{
	char delim[] = " ";
	char *token;
	char **array;
	int index = 0, len = 100;

	array = malloc(sizeof(char *) * len);
	if (!array)
		perror("low memory");

	token = strtok(line, delim);

	while (token != NULL)
	{
		array[index] = token;
		index++;

		token = strtok(NULL, delim);
	}

	array[index] = NULL;
	return (array);
}
