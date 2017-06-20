#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* HELPER FUNCTIONS */
int _putchar(char c);
int _strlen(char *str);
int _strcmp(char *s1, char *s2);
int _itoa(int n, char s[]);

/* STRUCT */
/**
 * struct match_s - struct
 * @find: variable that finds a match
 * @function: function that matching variables call
 * Return: none
 **/
typedef struct match_s{
	char *identifier;
	int (*function)();
} match_t;

/* MAIN FUNCTIONS */
int _print_string(va_list list);
int _print_char(va_list list);
int _printf(const char *format, ...);
int _print_mod(va_list list);

#endif
