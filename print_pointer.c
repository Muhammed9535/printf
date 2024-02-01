#include "main.h"

/**
 * print_pointer - prints an hexgecimal number.
 * @args: arguments.
 * Return: counter.
 */
int print_pointer(va_list args)
{
	void *p;
	char *s = "(nil)";
	long int x;
	int y;
	int i;

	p = va_arg(args, void*);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
		return (i);
	}

	x = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	y = print_hex_extra(x);
	return (y + 2);
}
