#include "shell.h"

/**
 * print_text - prints text to stdout
 * @text: text to print
 *
 * Return: number of characters to be printed
 */
int print_text(char *text)
{
	unsigned int i;

	i = 0;
	while (text[i] != '\0')
	{
		_putchar(text[i]);
		i++;
	}
	return (i);
}
