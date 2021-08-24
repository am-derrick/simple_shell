#include "shell.h"

/**
 * _strlen - returns the length of a string
 * @s: input string
 *
 * Return: lenght of the string
 */
unsigned int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
