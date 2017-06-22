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
	for (x -= 1; x >= 0; x--)
	{
		_putchar(str[x]);
		counter += 1;
	}
	return (counter);
}

/**
 * _print_rot13 - function that encodes a string using rot13
 * @list: va_list list
 * Return: 0 upon success

int _print_rot13(va_list list)
{
	char *x = va_arg(list, char *);
	int a, b, counter = 0;
	char temp;
	char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char t[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; x[a] != '\0'; a++)
	{
		for (b = 0; s[b] != '\0'; b++)
		{
			if (s[b] == x[a])
			{
				temp = t[b];
				break;
			}
		}
		_putchar(temp);
		counter += 1;
	}
	return (counter);
}**/
