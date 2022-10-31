#include "main.h"

/**
 * _memset - Fills the first and bytes of the memory area
 * @s: A pointer to the memroy to be filled
 * @n: The number of bytes to be filled
 * @b: bytes
 * description _memset: over there
 * Return: A  pointer to the filled memory aera @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n-- > 0)
	*ptr++ = b;
	return (s);
}
