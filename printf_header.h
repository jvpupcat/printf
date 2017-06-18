#ifndef PRINTF_HEADER_H
#define PRINTF_HEADER_H

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
	char *find;
	int (*function)();
} match_t;

/* MAIN FUNCTIONS */

#endif
