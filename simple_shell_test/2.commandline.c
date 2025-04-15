#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * split_line - Splits a string into words using strtok
 * @line: The input string (will be modified)
 *
 * Return: NULL-terminated array of words
 */
char **split_line(char *line)
{
	char *token;
	char **tokens;
	int bufsize = 64, i = 0;

	tokens = malloc(sizeof(char *) * bufsize);
	if (tokens == NULL)
		return (NULL);

	token = strtok(line, " \t\r\n");
	while (token != NULL)
	{
		tokens[i++] = token;

		if (i >= bufsize)
		{
			bufsize *= 2;
			tokens = realloc(tokens, sizeof(char *) * bufsize);
			if (tokens == NULL)
				return (NULL);
		}

		token = strtok(NULL, " \t\r\n");
	}

	tokens[i] = NULL;
	return (tokens);
}

/**
 * main - Entry point for testing split_line
 *
 * Return: Always 0
 */
int main(void)
{
	char line[1024];
	char **args;
	int i;

	printf("$ ");
	if (fgets(line, sizeof(line), stdin) == NULL)
		return (1);

	args = split_line(line);
	if (args == NULL)
		return (1);

	for (i = 0; args[i] != NULL; i++)
		printf("Arg[%d]: %s\n", i, args[i]);

	free(args);
	return (0);
}
