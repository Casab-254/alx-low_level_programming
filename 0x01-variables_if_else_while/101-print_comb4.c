#include<stdio.h>
/**
 * main - will print all possible outcome of three numbers
 *
 * Return: always 0
 */
int main(void)
{
	int x, y, z;

	for (x = 48; x < 58; x++)
	{
		for (y = 49; y <  58; y++)
		{
			for (z = 50; z < 58; z++)
			{
				if (z > y && y > x)
				{
					putchar(x);
					putchar(y);
					putchar(z);
					if (x != 55 || y != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
		}
		}
	}
		putchar('\n');
		return (0);
}
