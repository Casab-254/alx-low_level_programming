#include "main.h"

/**
 * wildcmp - Compares two strings considering the special character '*'.
 * @s1: The first string.
 * @s2: The second string, which can contain '*'.
 *
 * wildcmp_helper - Helper function for wildcmp, handles non-'*' characters.
 * @c: returns the function parameters.
 * Return: 1 if strings are identical, otherwise 0.
 */
int _putchar(char c);

int wildcmp_helper(char *s1, char *s2);

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
			return 1;
		
		return wildcmp_helper(s1, s2 + 1) || wildcmp_helper(s1 + 1, s2);
	}

	return wildcmp_helper(s1, s2);
}


int wildcmp_helper(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return 1;

	if (*s1 == *s2)
		return wildcmp(s1 + 1, s2 + 1);

	return 0;
}
