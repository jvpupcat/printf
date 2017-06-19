#include "holberton.h"
/**
 * _print_string - prints a string
 * @str: string being passed to function for print
 * Return: void.
 */
int _print_string(char *str)
{
	int x = 0;

	while (str[x])
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
	return (0);
}
/**
 * _print_char - prints a character
 * @c: character being passed to function
 * Return: void.
 */
int _print_char(char *c)
{
	if (*c != '\0')
	{
		_putchar(*c);
	}
	_putchar('\n');
	return (0);
}
