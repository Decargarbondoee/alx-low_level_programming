#include "main.h"
/**
 * _isalpha - check for character alphabet
 * @c: the character to be check
 *
 * Return: 1 if the charcter is letter lower or upper, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}