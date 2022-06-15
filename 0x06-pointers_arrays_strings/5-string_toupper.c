#include "main.h"

/**
 * string_toupper - lower to upper letter changes
 * @s: string to be changed
 *
 * Return: a pointer to the changed string
 */

char *string_toupper(char *s)
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
