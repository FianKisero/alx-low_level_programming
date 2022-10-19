#include "main.h"
/**
 * print_last_digit - prints the last digit
 * @ld: int type number
 * Return: return value of last digit
 */
int print_last_digit(int n)
{
	int ldigit = n % 10;
	
	if (ldigit < 0)
		ldigit = ldigit * -1;

	_putchar (ldigit + '0');
	return(ldigit);
}
