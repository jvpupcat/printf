#include "holberton.h"

/**
 * _match -
 * Return: 0 upon success
 */
int (*_match(char c))(va_list list)
{
	unsigned int x = 0;
	match_t matches[] = {
		{"%", _print_mod},
		{"c", _print_char},
		{"s", _print_string},
		/**{"d", _print_d_i},
		{"i", _print_d_i},**/
		{NULL, NULL}
	};

	while (matches[x].identifier != NULL)
	{
		if (*(matches[x].identifier) == c)
		{
			return (matches[x].function);
		}
		x++;
	}
   	return (NULL);
}
