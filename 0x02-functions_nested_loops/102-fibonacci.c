#include <stdio.h>
/**
 * main - t prints the first 50 Fibonacci numbers
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (count = 0; count < 2; count++)
	{
		sum = fib1 + fib2;
	printf("%dlu", sum);

	fib1 = fib2;
	fib2 = sum;

	if (count == 49)
		printf("\n");
	else
		printf(",")
	}
}