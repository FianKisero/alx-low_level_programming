#include <stdio.h>

/**
 * main -prints outr the size of various data types in c
 * Description:Program that prints out s followed by a new line
 * Return: int 0 when done and no errors
 */

int main(void)
{
	printf("Size of char: %d byte(s)\n", sizeof(char));
	printf("Size of int: %d byte(s)\n", sizeof(int));
	printf("Size of long int: %d byte(s)\n", sizeof(long int));
	printf("Size of long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
