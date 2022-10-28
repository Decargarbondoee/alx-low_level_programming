#include "main.h"

/**
 * rot13 - Encode a string using the root13.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string
 */
char *rot13(char *str)
{
	int index1 = 0;
	char alphabet[52] = {'a', 'b', 'c', 'd', 'e',
			'f', 'g', 'h', 'i', 'j',
			'k', 'l', 'm', 'n', 'o',
			'p', 'q', 'r', 's', 't',
			'u', 'v', 'w', 'x', 'y', 'z'};
	char rot13key[52] = {'N', 'O', 'P', 'Q', 'R', 'S',
			'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
			'A', 'B', 'C', 'D', 'E', 'F', 'G',
			'H', 'I', 'J', 'K', 'L', 'M', 'n',
			'o', 'p', 'q', 'r', 't', 'u', 'v',
			'w', 'x', 'y', 'z', 'a', 'b', 'c',
			'd', 'e', 'f', 'g', 'h', 'i', 'j',
			'k', 'l', 'm'};

	while (str[index1])
	{
		for (index1 = 0; index1 < 52; index1++)
		{
			if (str[index1] == alphabet[index1])
			{
				str[index1] = rot13key[index1];
				break;
			}
		}

		index1++;
	}

	return (str);
}
