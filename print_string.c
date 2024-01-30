#include "main.h"
/**
  * print_string - print string
  * @args: argument
  * Return: number of byte
  */
char *print_string(va_list args)
{
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		return (str = "(null)");
	}

	return (str);
}
