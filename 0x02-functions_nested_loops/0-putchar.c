#include <stdio.h>

/**
 * main - function prints text as output
 *
 * Return: return 0
 */
int main(void)
{
	char school[] = "_putchar";

	int i= 0;

	while (school[i] != '\0')
	{
		putchar(school[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
