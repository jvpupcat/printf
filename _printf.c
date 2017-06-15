#include "holberton.h"

/**
 * _printf - prints all user inputs 
 * @format: character string
 * Return: 0 upon success
 */
int _printf(const char *format, ...)
{
	va_list list;
	unsigned int y = 0, counter = 0;
	int (*temp_func)(va_list);

	va_start(list, format);
	while (format[y] != '\0')
	{
		if (format[y] == '%')
		{
			temp_func = _match(format[y + 1]);
			if (temp_func != NULL)
			{
				counter += temp_func(list);
				y += 2;
			}
		}
		else
		{
			_putchar(format[y]);
			counter = counter + 1;
			y++;
		}
	}
	va_end(list);
	return (counter);
}
