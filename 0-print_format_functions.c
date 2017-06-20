#include "holberton.h"

/**
 * _print_mod - prints % if found twice consecutively
 * @str: string being passed through function
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
 * @str: string being passed to function for print
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
 * @str: character being passed to function
 * Return: counter
 */
int _print_char(va_list list)
{
	int counter = 0;
	char str = (char)va_arg(list, int);

	_putchar(str);
	counter += 1;
	return (str);
}

/**
 * _print_d_i - function that converts string to integer
 * @list: va_list list
 * Return: k
 */
int _print_d_i(va_list list)
{
	int n;
	int k = 0;
	int i;
	int max = 100000000;

	n = va_arg(list, int);
	if (n < 0)
	{
		_putchar('-');
		n = -n;
		k++;
	}
	if (n == 0)
	{
		k += _putchar('0');
	}
	for (i = 0; i < 9; i++)
	{
		if (n / max != 0)
		{
			k += _putchar(((n / max) % 10) + '0');
		}
		max /= 10;
	}
	return (k);
}
