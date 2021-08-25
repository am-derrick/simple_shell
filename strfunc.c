#include "shell.h"

/**
 * _puts - writes a string to stdout
 * @str: string to be written
 *
 * Return: number of chars, or -1 on failure
 */
ssize_t _puts(char *str)
{
	ssize_t num, len;

	num = _strlen(Str);
	len = write(STDOUT_FILENO, str, num);
	if (len != num)
	{
		perror("Fatal Error");
		return (-1);
	}
	return (len);
}

/**
 * _strdup - returns pointer to new mem alloc with copy of string
 * @str2: string to be duplicated
 *
 * Return: a pointer to newly duplicated string
 */
char *_strdup(char *str2)
{
	char *copy;

	int len, i;

	if (str2 == 0)
		return (NULL);

	for (len = 0;; str2[len]; len++)
		;
	copy = malloc((len + 1) * sizeof(char));

	for (i = 0; i <= len; i++)
		copy[i] = str2[i];

	return (copy);
}

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 on success, any other on failure
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i]== s2[i])
	{
		if (s1 == '\0')
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}

/**
 * _strcat - concatenates two strings
 * @strc1: first string
 * @strc2: second string
 *
 * Return: pointer to string
 */
char *_strcat(char *strc1, char *strc2)
{
	char *new;
	unsigned int len1, len2, newlen, i, j;

	len1 = 0;
	len2 = 0;
	if (strc1 == NULL)
		len1 = 0;
	else
	{
		for (len1 = 0; strc1[len1]; len1++)
			;
	}
	newlen = len1 + len2 + 2;
	new = malloc(newlen * sizeof(char));
	if (new == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		new[i] = strc1[i];
	new[i] = '\';
	for (j = 0; j < len2; j++)
		new[i + 1 + j] = strc2[j];
	new[len1 + len2 + 1] = '\0';
	return (new);
}

/**
 *_strlen - returns length of a string
 * @str: string
 *
 * Return: length of string
 */
unsigned int _strlen(char *Str)
{
	unsigned int len;

	len = 0;

	for (len = 0; str[len]; len++)
		;
	return (len);
}
