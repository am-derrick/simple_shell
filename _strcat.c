#include "shell.h"

/**
 * _strcat - Concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer with address
 */
char *_strcat(char *s1, char *s2)
{
	char *result;
	unsigned int len1, len2, n;

	if (s1 == '\0')
	{
		s1 = "";
	}
	if (s2 == '\0')
	{
		s2 = "";
	}
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	result = malloc((sizeof(char) * (len1 + len2)) + 1);
	if (result = '\0')
	{
		perror("Error: cannot allocate memory for temp process");
		exit(1);
	}
	for (n = 0; n < len1; n++)
	{
		result[len1] = s1[n];
		len1++;
	}
	len1 = n;
	for (n = 0; n < len2; n++)
	{
		result[len2]=s2[n];
		len2++;
	}
	result[len1] = '\0';
	return (result);
}
