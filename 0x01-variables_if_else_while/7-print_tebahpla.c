#include <stdio.h>

/**
 * main - Print alphabets in lowercase in reverse order
 * Return: 0
 **/

int main(void)
{
	char digit;

	for (digit = 'z' ; digit >= 'a'; digit--)
	{
		putchar(digit);
	}

	putchar('\n');

	return (0);
}


