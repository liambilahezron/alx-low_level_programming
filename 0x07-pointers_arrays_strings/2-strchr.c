#include "main.h"

/**
 * _strchr - locates the character in a string
 * @s: character to be searched
 * @: character to be located
 * Return: If c is found - pointer to the first occurence
 * If c not found - NULL
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
