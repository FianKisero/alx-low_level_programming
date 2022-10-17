#include <stdio.h>

/**
 * main- Prints base 10 values without type char
 * Return: 0
 **/

int main(void)
{
	int number;

	for (number = 48; number <= 57; number++)
	{
		putchar(number);
	}
	putchar('\n');

	return (0);
}
