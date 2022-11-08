#include <stdio.h>
#include <stdlib.h>
/**
 * main - multply the args
 * @argc: number of arguments
 * @argv: Array of arguments
 * Return: 0 for successful exit
 */
int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Error");
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}

	return (0);
}
