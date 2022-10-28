#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @*str: The string to be capitalized.
 * @str: The string of the index.
 * string_toupper - The string with a pointer.
 *
 * Return: A string_toupper pointer to the changed string.
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
			index++;

		if (str[index - 1] == ' ' ||
		str[index - 1] == '\t' ||
		str[index - 1] == '\n' ||
		str[index - 1] == '*' ||
		str[index - 1] == ';' ||
		str[index - 1] == '.' ||
		str[index - 1] == '!' ||
		str[index - 1] == '?' ||
		str[index - 1] == '"' ||
		str[index - 1] == '(' ||
		str[index - 1] == ')' ||
		str[index - 1] == '{' ||
		str[index - 1] == '}' ||
		index == 0)
			str[index] -= 32;

		index++;
	}

	return (str);
}
