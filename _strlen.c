#include "main.h"
/**
  * _strlen: lent of string
  * @s: string to check
  * Return: length of string
  */
int _strlen(char *s)
{
	int x;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}	
	return (x);
}
