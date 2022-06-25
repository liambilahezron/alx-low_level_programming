!<arch>
0-isupper.c/    0           0     0     644     250       `
#include "main.h"

/**
 * _isupper - Checks for uppercase characters
 * @c: The character to be checked
 *
 * Return: 1 if character is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}

0-memset.c/     0           0     0     644     283       `
#include "main.h"

/**
 * _memset - ironnou
 * @s: pointer to char params
 * @s: pointer to char params
 * @b: data to change
 * @n: index
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

0-putchar.c/    0           0     0     644     235       `
#include "main.h"
/**
 * main - Entry point
 *
 * Description: print _putchar
 *
 * Return: Always 0
 */
int main(void)
{
	char str[] = "_putchar";
	int a;

	for (a = 0; a < 8; ++a)
		_putchar(str[a]);
	_putchar('\n');

	return (0);
}

0-strcat.c/     0           0     0     644     338       `
#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
100-atoi.c/     0           0     0     644     385       `
#include "main.h"

/**
 * _atoi - int
 * @s: pointer
 * Return: int.
 */
int _atoi(char *s)
{
	int i;
	int res = 0;
	int sig = -1;
	int brk = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sig = sig * -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			res = res * 10;
			res -= (s[i] - '0');
			brk = 1;
		}
		else if (brk == 1)
			break;
	}
	res = sig * res;
	return (res);
}

1-isdigit.c/    0           0     0     644     259       `
#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Checks for a digit (0-9)
 *  @c: The number to be checked
 *
 *  Return: 1 if the number is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}

1-memcpy.c/     0           0     0     644     287       `
#include "main.h"

/**
 * _memcpy - irontnoux2
 * @dest: pointer to char params
 * @src: pointer to char params
 * @n: size
 * Return: *dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

1-strncat.c/    0           0     0     644     424       `
#include "main.h"

/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: pointer to char parameter
 * @n: int parameter
 *
 * Return: *dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
2-strchr.c/     0           0     0     644     273       `
#include "main.h"

/**
 * _strchr - prints found c
 * @s: pointer to char
 * @c: char params to found
 * Return: *S
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}

2-strncpy.c/    0           0     0     644     333       `
#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n : input value
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}

3-islower.c/    0           0     0     644     255       `
#include "main.h"

/**
 * _islower - checks if a character is lowercase
 * @c: The character to be checked
 *
 * Return: 1 if the character is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

3-puts.c/       0           0     0     644     178       `
#include "main.h"

/**
 * _puts - Prints a string to stdout.
 * @str: The string to be printed.
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
3-strcmp.c/     0           0     0     644     307       `
#include "main.h"

/**
 * _strcmp - compare string values
 * @s1: input value
 * @s2: input value
 *
 * Return: s1[i] - s2[i]
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

3-strspn.c/     0           0     0     644     441       `
#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: String where substring will look
 * @accept: Substring of accepted chars
 * Return: Length of occurrence.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	char *t = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				c++;
				break;
			}
		if (!(*--accept))
			break;
		accept = t;
	}
	return (c);
}

4-isalpha.c/    0           0     0     644     307       `
#include "main.h"

/**
 * _isalpha - checks if a character is alphabetic
 * @c: The character to be checked
 *
 * Return: 1 if the character is letter, lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
		(c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

4-strpbrk.c/    0           0     0     644     316       `
#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - bytes
 * @s: pointer to char
 * @accept: pointer to char
 * Return: NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}

		}
		s++;
	}
	return (NULL);
}

5-strstr.c/     0           0     0     644     437       `
#include "main.h"

/**
 * _strstr - function locate
 * @haystack: pointer to char
 * @needle: pointer to char
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	char *result = haystack, *fneedle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (result);
		}
		needle = fneedle;
		result++;
		haystack = result;
	}
	return (0);
}

6-abs.c/        0           0     0     644     229       `
#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: The integer to be computed
 *
 * Return: The absolute value of the integer
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}

9-strcpy.c/     0           0     0     644     272       `
#include "main.h"

/**
 * *_strcpy - copy strg to another string
 * @dest: pointer
 * @src: poiter
 * Return: numbers dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

