#include "main.h"
/**
 * print_alphabet - print alphabets
 *
 */
void print_alphabet(void)
{
	char alp;

	alp = 'a';
	while (alp <= 'z')
	{
		_putchar(alp);
		alp++;
	}
	_putchar('\n');
}
