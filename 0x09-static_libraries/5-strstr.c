#include "main.h"

/**
 * _strstr - function locate
 * @haystack: pointer to char
 * @needle: pointer to char
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	char *_strstr(char *haystack, char *needle)
	{
		while (*haystack)
		{
			if (*haystack++ != *needle++)
			{
				break;
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
}
