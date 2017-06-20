#include "holberton.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
<<<<<<< HEAD

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

/**
 * _itoa - function that converts integer to char
 * @n: first int variable
 * @s: char string
 * Return: integer upon success
 **/
int _itoa(int n, char s[])
{
        int x = 0;
        int sign;

        sign = n;
        if (sign < 0)
                n = -n;
        do {
                s[x++] = n % 10 + '0';
        }
        while ((n = n / 10) > 0);
        if (sign < 0)
        {
                s[x++] = '-';
        }
        s[x] = '\0';
        return (0);
}
=======
>>>>>>> 25db83605ff8a901e84953636701b94bd320a9e0
