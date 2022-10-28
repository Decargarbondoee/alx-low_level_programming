#include <stdio.h>
#include "main.h"
/**
 *  * main - magic                                                                                                                       
 *
 *   * @n: represent number                                                                                                               
 *
 *    * @a: represent alphabet                                                                                                             
 *
 *     * @p: is the pointer                                                                                                                 
 *
 *      * Return: Always 0 (success)                                                                                                         
 *
 *       */                           

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;

	*(p + 5) = 98;
/* ...so that this prints 98\n */
	printf("5[2] = %d\n", a[2]);
	return (0);
}
