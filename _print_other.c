#include "holberton.h"

/**
 * _print_rev - function that prints string in reverse
 * @s: pointer
 * Return: none
 **/
int _print_rev(va_list list)
{
	char *str = va_arg(list, char *);	
	int x, counter = 0;

	if (str == NULL)
		str = ")llun(";
	for (x = 0; str[x] != '\0'; x++)
		;
	for (x--; x >= 0; x--)
	{
		_putchar(str[x]);
		counter += 1;
	}
	_putchar('\n');
	return (counter);
}
