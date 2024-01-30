#include "main.h"

/*
 * print_character - prints a single character
 * Description - this function is a variadic function
 * @car: accepts arguments
 *
 * Return: (1)
 */

int print_character(va_list args)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);
	return (1);
}
