#include "printf_header.h"

/**
 * match_specifier - function that finds specific function
 * @c: variable that gets passed through function
 * Return: a function upon finding a match
 **/
int match_specifier(char *c)
{
	match_t matches[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_digit},
		{'i', print_int},
		{NULL, NULL}
	}

	int x = 0;
	while (matches[x].find != NULL)
	{
		if (_strcmp(matches[x].find, c) == 0)
			return (matches[x].function);
	}
}
