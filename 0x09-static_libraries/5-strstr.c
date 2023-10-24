#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
        	for (; *haystack != '\0'; haystack++)
        	{
                    	char *g = haystack;
                    	char *q = needle;

                    	while (*g == *q && *q != '\0')
                    	{
                                	g++;
                                	q++;
                    	}
 
                    	if (*p == '\0')
                                	return (haystack);
        	}

        	return (0);
}
