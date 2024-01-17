#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the product of two arguments
 * @argc: counts the number of arguments
 * @argv: array of argument strings
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int k;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		k = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", k);
	}
	return (0);
}
