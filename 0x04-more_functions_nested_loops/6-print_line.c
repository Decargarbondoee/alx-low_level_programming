#include "Main.h"

/**
 * print_line - print a line using '_'
 * @n: the number of time '_' should be printed
 */

void print_line(int n)
{
	int l;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
			_putchar('_');
	}

	_putchar('\n');
}
