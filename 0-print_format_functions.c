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
	char str =(char)va_arg(list, int);

	_putchar(str);
	counter += 1;
	return (str);
}

/**
 * _print_d_i - function that converts string to integer
 * @list: va_list list
 * Return: 0 upon success

int _print_d_i(va_list list)
{
	char str = va_arg(list, int);
	int x;

	if (str < 0)
	{
		str = -str;
	}
	do 
	{
		str[x++] = n % 10 + '0';
	} while ((n /= 10) > 0);
	if (str < 0)
		str[x++] = '-';
	str[x] = '\0';
	return (x);
}**/
