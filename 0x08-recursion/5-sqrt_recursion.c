#include "main.h"
int real_sqrt(int n, int t);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 * @n: number to calculate the sqaure root of
 * real_sqrt- recurseses to get the real sqr of a given number
 * @i: iterator
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (real_sqrt(n, 0));
}

int real_sqrt(int n, int t)
{
	if (t * t > n)
		return (-1);
	if (t * t == n)
		return t;
	return real_sqrt(n, t + 1);
}
