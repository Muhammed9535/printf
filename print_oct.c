#include "main.h"

/**
 * print_oct - prints an octal number.
 * @args: arguments.
 * Return: counter.
 */
int print_oct(va_list args)
{
	unsigned int a[11];
	unsigned int i, m, n, sum;
	int count;

	n = va_arg(args, unsigned int);
	m = 1073741824; /* (8 ^ 10) */
	a[0] = n / m;
	for (i = 1; i < 11; i++)
	{
		m /= 8;
		a[i] = (n / m) % 8;
	}
	for (i = 0, sum = 0, count = 0; i < 11; i++)
	{
		sum += a[i];
		if (sum || i == 10)
		{
			_putchar('0' + a[i]);
			count++;
		}
	}
	return (count);
}

