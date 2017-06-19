#include "holberton.h"
/**
 * _print_string - 
 * @str:
 * Return: void.
 */
void _print_string(char *str)
{
	int x = 0;

	while (str[x])
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
/**
 * _print_char - 
 * @c:
 * Return: void.
 */
void _print_char(char *c)
{
	if (*c != '\0')
	{
		_putchar(*c);
	}
	_putchar('\n');
}
