#include "shell.h"

/**
 * _realloc - reallocates pointer to double the space
 * @ptr: pointer to old array
 * @size: pointer to number of elements in old array
 *
 * Return: pointer to new array
 */
char **_realloc(char **ptr, size_t *size)
{
	char **new;
	size_t i;

	new = malloc(sizeof(char *) * ((*size) + 10));
	if (new == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0;i < (*size); i++)
	{
		new[i] = ptr[i];
	}
	*size += 10;
	free(ptr);
	return (new);
}
