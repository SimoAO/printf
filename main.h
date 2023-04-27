#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

/**
 * struct _form - token of struct
 * @spec: format
 * @f: associated function
 */
typedef struct _form
{
	char spec;
	int (*f)(va_list);
} form;

int print_int(va_list data);
int print_string(va_list data);
int print_char(va_list data);
int print_binary(va_list data);
int print_HEX(va_list data);
int print_hex(va_list data);
int print_oct(va_list data);
int print_point(va_list data);
int print_unsign(va_list data);
int print_rot13(va_list data);
int print_rev(va_list data);

int _strlen(const char *str);
char *itoa(long int, int);

int hand(const char *, va_list);
int percent_hand(const char *, va_list, int *);

int print_ch(char *str);
int _putchar(char c);
int buff(char);

int _printf(const char *format, ...);
int _strcmp(char *str1, char *str2);

int is_lowercase(char c);
char *str_to_upper(char *str);
int rot13(char *st);

#endif
