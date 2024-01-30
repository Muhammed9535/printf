#include "main.h"
/*
 *
 *
 */

int print_string(va_list args)
{
	char *str;
	int i;
	int len;

	str = va_arg(args, char*);
	if (str == Null)
	{
		str = "(null)";
		len = _strlen(str);

		for (i = 0; i < len; i++)
		{
			_putchar(str[i]);
			return (len);
		}
		else
		{
			len = _strlen(str);
			for (i = 0; i < len; i++)
			{
				_putchar(str[i]);
				return (len);
			}
		}
	}
}
