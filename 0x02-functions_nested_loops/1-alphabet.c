#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet letters
 * desc: The function uses loop to operate
 * Return: no return
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
