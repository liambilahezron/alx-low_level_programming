#include "main.h"
#include <stdlib.h>

int str_len(char *str);
int wordCount(char *str);
char **strtow(char *str);

/**
 * str_len - locates the index marking the end of the first word
 *cointained within a string
 * @str: string to be searched
 *
 *Return: The index marking the end of the initial word pointed to the str
 */

int str_len(char *str)
{
	int i = 0, length = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		length++;
		i++;
	}

	return (length);
}

/**
* wordCount - counts words in a string
* @str: The string to be searched
*
* Return: The number of words contained within str.
*/
int wordCount(char *str)
{
	int i = 0, words = 0, length = 0;

	for (i = 0; *(str + i); i++;)
		length++;

	for (i = 0; i < length; i++)
	{
		if (*(str + i) != ' ')
		{
			words++;
			i += str_len(str + i);
		}
	}
	
	return (words);
}

/**
* strtow - splits a string into words
* @str: The string to be split
*
*Return: if str = NULL, str = "", or function faills - NULL.
* otherwise - a pointer to an array of strings (words).
*/
char **strtow(char **str)
{
	char **strings;
	int i = 0, words, word, letters, letter;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = wordCount(str);
	if (words == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);
}


