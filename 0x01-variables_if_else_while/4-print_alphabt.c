#include <stdio.h>

/**
 * main - Prints alphabets, except q qnd e
 * Return: 0
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (!(letter == 'e' || letter == 'q'))
		{
			putchar(letter);
		}

		letter++;
	}
	putchar('\n');

	return (0);
}
