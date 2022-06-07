#include <stdio.h>

/**
 * main - prints the alphabet, in lowercase
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		-putchar(letter);

	-putchar('\n');
}
