#include "Main.h"

/**
 * print_line - print a line using '_'
 * @n: the number of time '_' should be printed
 */

void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}

	_putchar('\n');
}
