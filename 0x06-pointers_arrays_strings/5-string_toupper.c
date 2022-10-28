#include "main.h"
/**
 * string_toupper - Changes all lowercase letters
 *	 to a string to uppercase.
 * @str: The string to be changed.
 *
 * @*str: Always 0
 */
char string_toupper(char str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;

		index++;
	}

	return (str);
}
