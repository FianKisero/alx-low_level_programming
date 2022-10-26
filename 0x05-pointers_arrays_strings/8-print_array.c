#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the elements of an array of integers, followed by a new line.
 * @a: array of integers
 * @n: number of items to print
 * Return: void
 */

void print_array(int *a, int n)
{
	int position;

	for (position = 0; position < n; position++)
	{
		printf("%d", a[position]);

		if (position == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}


