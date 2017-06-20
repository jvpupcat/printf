#include "holberton.h"
/**
 * _printf - prints all user inputs 
 * @format: character string
 * Return: always 0.
 */
int _printf(const char *format, ...)
{
	va_list list;
	unsigned int x = 0;
	unsigned int y;
	match_t matches[] = {
		{"c", _print_char},
		{"s", _print_string},
		{"%", _print_mod},
		/** {"d", _print_digit},
		    {"i", _print_int}, */
		{NULL, NULL}
	};
	va_start(list, format);
	y = 0;
	while (format[y] != '\0')
	{
		if (format[y] == '%')
		{
			while (matches[x].identifier != NULL)
			{
				if (*(matches[x].identifier) == format[y + 1])
				{
					(matches[x].function(list));
				}
				x++;
			}
		}
		_putchar(format[y]);
		y++;
	}
	va_end(list);
	return (0);
}
