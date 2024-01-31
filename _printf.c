#include "main.h"
/**
  * _printf - a function that produces output according to a format
  * @format :  is a character string.
  * @... : variable argument
  * Return: integer
  */
int _printf(const char *format, ...)
{
	int i = 0, j, b_len = 0;
	char *s, *create_buff;
	va_list args;

	create_buff = malloc(1024 * sizeof(char));
	if (create_buff == NULL)
	{
		free(create_buff);
		return (-1);
	}
	va_start(args, format);
	if (format == NULL)
		return (-1);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			create_buff[b_len] = format[i];
		}
		else if (format[i] == '%')
		{
			for (j =  0; type_print_t[j].f != NULL; j++)
			{
				if (format[i + 1] == *(type_print_t[j].symbol))
				{
					s = type_print_t[j].f(args);
					if (s == NULL)
						return (-1);
				}
			}
		}
		write(1, create_buff, b_len);
		b_len++;
	}
	va_end(args);
	return (b_len);
}
