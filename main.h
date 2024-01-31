#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
/**
  * struct print_type -  struct
  * @symbol: symcol
  * @f: funtion pointer
  */
typedef struct print_type
{
	char *symbol;
	int *(*f)(va_list args);
}
type_print;


type_print type_print_t[] = {
	{"c", print_character},
	{"s", print_string},
	/*{"i", print_int},
	{"d", print_int},*/
	{NULL, NULL}
};

int _strlen(char *s);
int _printf(const char *format, ...);
int _putchar(char c);
char *print_character(va_list args);
char *print_string(va_list args);
int print_int(va_list args);
#endif
