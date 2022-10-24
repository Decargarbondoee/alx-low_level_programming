#include <stdio.h>

/**
 * _putchar - writes character c
 * @c: character to be printed
 * Return: success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
