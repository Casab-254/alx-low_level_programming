#include "main.h"
#include <stddef.h>
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 * @c: the parameter for recursion.
 * is_palindrome_helper - Helper function to check if a string is a palindrome.
 * @start: Start index of the string.
 * @end: End index of the string.
 * Return: 1 if it is, 0 it's not
 */

int _putchar(char c);

size_t _strlen(const char *s)
{
       	if (*s)
		return 1 + _strlen(s + 1);
	return 0;
}

int is_palindrome_helper(const char *s, size_t start, size_t end)
{
	if (start >= end)
		return 1;

	if (s[start] != s[end])
		return 0;
	return is_palindrome_helper(s, start + 1, end - 1);
}

int is_palindrome(char *s)
{
	size_t len = _strlen(s);

	if (len == 0)
		return 1;
	return is_palindrome_helper(s, 0, len - 1);
}
