#include "main.h"
/**
 * _isdigit - check if the character is a digits
 * @c: checker int
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	int y = 0;

	if (c >= '0' && c <= '9')
		y = 1;

	return (y);
}
