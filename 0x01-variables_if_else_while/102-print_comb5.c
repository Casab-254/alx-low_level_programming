#include<stdio.h>
/**
 * main - will print all possible outcome of two two digits
 *
 * Return: always 0
 */
int main(void)
{
	int x, y;

	for (x = 0; x < 100; x++)
	{
		for (y = 0; y < 100; y++)
		{
			if (y < x)
			{
				putchar((x / 10 + 48));
				putchar((x % 10) + 48);
				putchar(' ');
				putchar((y / 10 + 48));
				putchar((y % 10) + 48);
					if (x != 98 || y != 99)
					{
						putchar(',');
						putchar(' ');
					}
			}
		}
	}
	putchar('\n');
	return (0);
}