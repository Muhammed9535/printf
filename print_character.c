#include "main.h"
/**
 * print_character - prints a single character
 * @args: accepts arguments
 *
 * Return: (1)
 */

char *print_character(va_list args)
{
	static char c[2] = {0, '\0'};

	c[0] = va_arg(args, int);
	if (c == '\0')
		return (" ");
	return (c);
}
