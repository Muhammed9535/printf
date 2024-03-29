#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>



/**
 * struct format - converter for printf
 * @ph: type char pointer of the specifier
 * @function: function for the conversion specifier
 *
 */

typedef struct format
{
	char *ph;
	int (*function)();
} convert;

int *_strcpy(char *dest, char *src);
int print_pointer(va_list args);
int print_unsigned(va_list args);
int _strlenc(const char *s);
int print_exc_string(va_list args);
int _print_hex_lower(va_list);
int _print_hex_upper(va_list);
int print_hex(unsigned int n, unsigned int c);
int print_oct(va_list args);
int print_binary(va_list args);
int print_revs(va_list args);
int print_rot13(va_list args);
int print_integer(va_list args);
int print_decimal(va_list args);
int _strlen(char *s);
int rev_string(char *s);
int print_37(void);
int print_character(va_list args);
int print_string(va_list args);
int _putchar(char c);
int _printf(const char *format, ...);
#endif
