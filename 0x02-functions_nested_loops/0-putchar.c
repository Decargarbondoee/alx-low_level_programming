#include "main.h"

/**
 * main - prints _putchar, followed by a new line
 * Return: always 0(success)
 */
int main(void)
{
	char a = "Emmett";

	while (a)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');

	return (0);
}
