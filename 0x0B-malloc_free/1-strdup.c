#include "main.h"
/**
 * _strlen - count array.
 * @s: array of elements
 * Return: 1
 */

int _strlen(char *s)
{
	unsigned int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * _strcpy - copy array
 * @str: array of elements
 * @dest: dest array
 * Return: dest
 */

char *_strcpy(char *dest, char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * _strdup - array to prints a string
 * @str: array of element
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *dest;
	unsigned int size;

	if (str == 0)
	{
		return (NULL);
	}

	size = _strlen(str) + 1;

	dest = (char *) malloc(size * sizeof(char));

	if (dest == 0)
	{
		return (NULL);
	}
	_strcpy(dest, str);
	return (dest);
}
