#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string to print
 */

void print_rev(char *s)
{
	int len = 0, i = 0;
	len = _slen(s);

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
/**
 * _slen - returns the length of a string
 * @s: string
 * Return: returns lenght;
 */
int _slen(char *s)
{
	int count, i;
	i = 0;
	for (count = 0; s[count] != '\0'; count++)
		i++;

	return (i);
}
