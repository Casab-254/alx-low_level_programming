#include "main.h"
#include <stdio.h>
/**
  * factorial: function parameter
  *
  * @n: the function parameter
  *
  * Return: the factorial results
  */

int factorial(int n)
{
	if (n < 0)
		return -1;
	if (n == 0)
		return 1;
	return n * factorial(n - 1);
}
