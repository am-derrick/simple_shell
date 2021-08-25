#include "shell.h"

/**
 * tokenize - tokenises a buffer with a delimiter
 * @buffer: buffer to tokenize
 * @delimiter: delimiter to tokenize string
 *
 * Return: pointer to array ofpointers to the tokens
 */
char **tokenize(char *buffer, char *delimiter)
{
	char **tokens = NULL;
	size_t i = 0, mcount = 10;

	if (buffer == NULL)
		return (NULL);
	tokens = malloc(ssizeof(char *) * mcount);
	if (tokens == NULL)
	{
		perror("Fatal Error");
		return (NULL);
	}
	while ((tokens[i] = neww_strtok(buffer, delimeter)) != NULL)
	{
		i++;
		if (i == mcount)
		{
			tokens = _realloc(tokens, &mcount);;
			if (tokens == NULL)
			{
				perror("Fatal Error");
				return (NULL);
			}
		}
		buffer = NULL;
	}
	return (tokens);
}
