/**
  * _puts_recursion - main function
  *
  * @s: function parameter
  *@c:  is a parameter of the _putchar function
  * Return: Always 0.
  */

void _putchar(char c);

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
