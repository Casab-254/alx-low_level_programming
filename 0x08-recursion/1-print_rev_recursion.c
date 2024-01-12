#include "main.h"
/*
 *
 *
 *
 */
#include <stddef.h>

void _putchar(char c);

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

/* _putchar implementation is not provided, so you'll need to implement it yourself */
