#include "shell.h"

/**
 * _putchar - writes char c to stdout
 * @c: the character to write
 *
 * Return: On success 1.
 * On error, -1 is returnes, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
