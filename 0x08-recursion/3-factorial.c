#include "main.h"
/**
 * factorial - returns a factorial of a number
 * @n: the number to be returned
 *
 * Return: returns n
 */
int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	result *= factorial(n - 1);

	return (result);
}
