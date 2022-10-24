#include "main.h"
/**
 * swap_int - value of two interger
 * @a: int a
 * @b: int b
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int q;


	q = *a;
	*a = *b;
	*b = q;
}
