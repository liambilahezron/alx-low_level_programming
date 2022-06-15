#include "main.h"

/**
 * *_strcant - two words
 * @dest : pointer to char param
 * @src : pointer to char parameter
 * @n : int parameter
 * Return: *dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int m;
	int i;

	m = 0;

	for (i = 0; i < 1000; i++)
	{
		if (dest[i] == '\0')
		{
			break;
		}
		m++;
	}

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[m + 1] = src[i];
	}
	dest[m + 1] = '\0';
	return (dest);
}
