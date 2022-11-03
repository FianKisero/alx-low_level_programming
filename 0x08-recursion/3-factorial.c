#include "main.h"
/**
 * _strlen_recursion - gives length of a string
 * @s: string to be measured
 * Return: length of the string
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));

}
