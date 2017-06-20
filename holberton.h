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
int _print_string(char *str);
int _print_char(char *str);
int _printf(const char *format, ...);
int _print_mod(char *str);

#endif
