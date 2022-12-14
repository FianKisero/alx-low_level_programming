#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int outstring = 0, len = 0, n;

	while (str[outstring++])
		len++;

	if ((len % 2) == 0)
		n = (len + 1) / 2;
	else
		n = (len + 1) / 2;

	for (outstring = n; outstring < len; outstring++)
		_putchar(str[outstring]);
	_putchar('\n');
}
