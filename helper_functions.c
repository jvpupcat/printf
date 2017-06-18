#include "printf_header.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _strlen - function that calculates the length of string
 * @str: pointer that points to string
 * Return: x
 */
int _strlen(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		x++;
	}
	return (x);
}

/**
 * _strcmp - function that compares strings
 * @s1: first string
 * @s2: second string
 * Return: 0 upon success
 **/
int _strcmp(char *s1, char *s2)
{
	int x = 0;
	int diff = 0;

	while (s1[x] != '\0' && s2[x] != '\0' && s1[x] == s2[x])
	{
		x++;
	}
	if (s1[x] != s2[x])
	{
		diff = s1[x] - s2[x];
		return (diff);
	}
	return (0);
}
