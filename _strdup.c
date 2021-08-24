#include "shell.h"

/**
 * _strdup - returns pointer of a duplicate string
 * @str: string to duplicate
 *
 * Return: pointer to a string with dupliicated address
 */
char *_strdup(char *str)
{
	char *ptr;
	int count;
	int i;

	if (str == '\0')
		return ('\0');
	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	ptr = malloc((count * sizeof(char)) + 1);
	if (ptr == '\0')
		return ('\0');
	for (i = 0; i < count; i++)
	{
		ptr[i] = str[i];
	}
	ptr[i] = '\0';
	return (ptr);
}
