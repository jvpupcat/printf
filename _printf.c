#include "holberton.h"
/**
 * _printf - prints all user inputs 
 * @format: character string
 * Return: 0 upon success
 */
int _printf(const char *format, ...)
{
	va_list list;
	unsigned int x = 0;
	unsigned int y = 0;
	match_t matches[] = {
		{"%", _print_mod},
		{"c", _print_char},
		{"s", _print_string},
		{"d", _print_d_i},
		{"i", _print_d_i},
		{NULL, NULL}
	};
	va_start(list, format);
	while (format[y] != '\0')
	{
		if (format[y] == '%')
		{
			while (matches[x].identifier != NULL)
			{
				if (*(matches[x].identifier) == format[y + 1])
				{
					y = y + 2;
					(matches[x].function(list));
				}
				x++;
			}
		}
		else
		{
			_putchar(format[y]);
			y++;
		}
	}
	va_end(list);
	return (0);
}
