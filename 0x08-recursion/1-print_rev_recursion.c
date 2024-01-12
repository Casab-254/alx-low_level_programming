#include "main.h"
#include "main.h"

/**
  * _print_rev_recursion - main function
  *
  * @s: Function parameter
  * @c:the limits within which the function operates
  * Return: Void
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
