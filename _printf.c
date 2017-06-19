#include "holberton.h"
/**
 * _printf - 
 * @format: 
 * Return:
 */
int _printf(const char *format, ...)
{
	va_list list;
	unsigned int i = 0; x;

	va_start(list, format);

	while (format && format[i])
	{
		x = 0;
		while (matches[x].find != NULL)
		{
			if (matches[x].find[0] == format[i])
			{
				matches[x].function(list);
			}
			x++;
		}
		i++;
	}
	_putchar('\n');
	va_end(list);
	return (0);
}
