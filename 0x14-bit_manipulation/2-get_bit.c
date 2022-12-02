#include "main.h"

/**
 * get_bit - Gets the value of the bits at a given index
 * @n: The bit.
 * @index: The index to get the value at - indices start at 0.
 * Return: If the error occure - -1. otherwise -The value of bit at index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 0))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
