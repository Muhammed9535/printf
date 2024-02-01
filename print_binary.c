#include "main.h"

/**
 * print_binary - prints args in binary form.
 *
 * @args: accepts arguments
 *
 * Return: (count)
 */

int print_binary(va_list args)
{
	int i, a = 1, b;
	int flag = 0;
	int count = 0;
	unsigned int num = va_arg(args, unsigned int);
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((a << (32 - i)) & num);
		if (p >> (31 - i))
			flag = 1;
		if (flag)
		{
			b = p >> (31 - i);
			putchar(b + 48);
			count++;
		}
	}
	if (count == 0)
	{
		count++;
		_putchar('0');
	}
	return (count);
}
