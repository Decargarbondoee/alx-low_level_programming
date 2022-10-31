#include "main.h"

/**
 * _memcpy - Bytes from src to dest
 * @dest: the place we copy to
 * @src: we copy from
 * @n: How nuch we copy
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n-- > 0)
	{
		*dest = *src;
		dest++;
		src++;
	}
}
