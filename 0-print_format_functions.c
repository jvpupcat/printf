#include "holberton.h"

/**
 * _print_mod - prints % if found twice consecutively
 * @list: variable that takes in any argument
 * Return: counter
 */
int _print_mod(va_list list)
{
	int counter = 0;

	va_arg(list, int);

	_putchar('%');
	counter += 1;
	return (counter);
}

/**
 * _print_string - prints a string
 * @list: variable that takes in any argument
 * Return: counter
 */
int _print_string(va_list list)
{
	int counter = 0;
	char *str = va_arg(list, char *);
	int x = 0;

	while (str[x])
	{
		_putchar(str[x]);
		counter += 1;
		x++;
	}
	return (counter);
}

/**
 * _print_char - prints a character
 * @list: variable that takes in any argument
 * Return: counter
 */
int _print_char(va_list list)
{
	int counter = 0;
	char str = (char)va_arg(list, int);

	_putchar(str);
	counter += 1;
	return (counter);
}

/**
 * _print_d_i - function that converts string to integer
 * @list: variable that takes in any argument
 * Return: k
 */
int _print_d_i(va_list list)
{
	int n,  i, counter = 0;
	int max = 100000000;

	n = va_arg(list, int);
	if (n < 0)
	{
		_putchar('-');
		n = -n;
		counter++;
	}
	if (n == 0)
	{
		counter += _putchar('0');
	}
	for (i = 0; i < 9; i++)
	{
		if (n / max != 0)
		{
			counter += _putchar(((n / max) % 10) + '0');
		}
		max /= 10;
	}
	return (counter);
}
