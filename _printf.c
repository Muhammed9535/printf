#include "main.h"
/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char * const format, ...)
{
	convert p[] = {
		{"%s", print_string},
		{"%c", print_character},
		{"%%", print_37},
		{"%i", print_integer},
		{"%d", print_decimal},
		{"%r", print_revs},
		{"%R", print_rot13},
		{"%b", print_binary},
		{"%u", print_unsigned},
		{"%o", print_oct},
		{"%x", _print_hex_lower},
		{"%X", _print_hex_upper},
		{"%S", print_exc_string},
		{"%p", print_pointer},
		{NULL, NULL}
	};

	va_list args;
	int i = 0, j, length = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
Here:
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (p[j].ph[0] == format[i] && p[j].ph[1] == format[i + 1])
			{
				length += p[j].function(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		length++;
		i++;
	}
	va_end(args);
	return (length);
}
