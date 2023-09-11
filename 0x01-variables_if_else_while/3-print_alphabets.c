#include<stdio.h>

/**
 * main - to prints alphabets in lower and upper cases
 *
 * Return: always0 (success)
 *
 */
int main(void)
{
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
