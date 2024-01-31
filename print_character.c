#include "main.h"
/**
 * print_character - prints a single character
 * @args: accepts arguments
 *
 * Return: (1)
 */

int print_character(va_list args)
{
	char s;

	s = va_arg(val, int);
	_putchar(s);
	return (1);
}
