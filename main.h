#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>

#define BUFF_FLUSH -1
#define BUFF_SIZE 1024
#define PARAMS_INIT {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
#define NULL_STRING "(null)"
#define CONVERT_UNSIGNED 2
#define CONVERT_LOWERCASE 1

typedef struct parameters
{
	unsigned int unsign	: 1;
	unsigned int minus_flag	: 1;
	unsigned int plus_flag	: 1;
	unsigned int zero_flag	: 1;
	unsigned int space_flag	: 1;
	unsigned int hashtag_flag	: 1;

	unsigned int precision;
	unsigned int width;

	unsigned int l_modifier	: 1;
	unsigned int h_modifier	: 1;
} params_t;

typedef struct specifier
{
	char *specifier;
	int (*f) (va_list, params_t *);
} specifier_t;

int print_S(va_list ap, params_t *params);
int print_percent(va_list ap, params_t *params);
int print_int(va_list ap, params_t *params);
int print_string(va_list ap, params_t *params);
int print_char(va_list ap, params_t *params);

int print_binary(va_list ap, params_t *params);
int print_HEX(va_list ap, params_t *params);
int print_hex(va_list ap, params_t *params);
int print_octal(va_list ap, params_t *params);

int print_address(va_list ap, params_t *params);
int print_unsigned(va_list ap, params_t *params);
char *convert(long int num, int base, int flags, params_t *params);

int (*get_specifier(char *s))(va_list ap, params_t *params);
int get_print_func(char *s, va_list ap, params_t *params);


int print_rot13(va_list ap, params_t *params);
int print_rev(va_list ap, params_t *params);

int _puts(char *str);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
