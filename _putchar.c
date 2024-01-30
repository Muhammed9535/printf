#include "main.h"

/*
 * _putchar - prints a character
 *
 * @c: accepts a character
 *
 * Return: character
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
