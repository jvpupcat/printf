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
 * @str: character being passed to function
 * Return: void.
 */
int _print_char(char *str)
{
	int n;

	for (n = 0; n != '\0'; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
	return (0);
}
/**
 * _print_mod - prints % if found twice consecutively
 * @str: string being passed through function
 * Return: always 0.
 */
int _print_mod(char *str)
{
	int i;
	
	for (i = 0; str[i] != '\0'; i++)
	{ 
		if (str[i] == '%' && str[i + 1] == '%')
		{
			_putchar('%');
		}
	}
	_putchar('\n');
	return (0);
}
