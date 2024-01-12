#include "main.h"
#include <stddef.h>
/**
 * _strlen_recursion_helper - Helper function to calculate string length recursively.
 * @s: Pointer to the string.
 * @count: Current count of characters.
 *
 * Return: Length of the string.
 */
int _putchar(char c);

int _strlen_recursion_helper(char *s, int count);

int _strlen_recursion(char *s)
{
	if (s == NULL)
		return 0;
	
	return _strlen_recursion_helper(s, 0);
}
int _strlen_recursion_helper(char *s, int count)
{

	if (*s == '\0')
		return count;

	return _strlen_recursion_helper(s + 1, count + 1);
}
