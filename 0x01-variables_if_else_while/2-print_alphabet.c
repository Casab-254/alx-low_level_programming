#include<stdio.h>
/**
 * main - prints the alphabet in lowercase, followed by a new line
 *
 * Return: always 0 (success)
 *
 */
int main(void)
{
	char alp[27] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
