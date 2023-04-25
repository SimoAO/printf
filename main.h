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
/**
 * struct parameters - parameters of struct
 * @unsign: flag unsigned value
 * @minus_flag: minus_flag specified
 * @plus_flag: plus_flag specified
 * @zero_flag: zero_flag specified
 * @space_flag: space_flag specified
 * @hashtag_flag: hashtag_flag specified
 * @precision: field specified
 * @width: field secified
 * @l_modifier: if it is specified
 * @h_modifier: if it is specified
 */
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

/**
 * struct specifier - token of struct
 * @specifier: token format
 * @f: associated function
 */
typedef struct specifier
{
	char *specifier;
	int (*f)(va_list, params_t *);
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
int *get_width(char *s, params_t *params, va_list ap);
int get_flag(char *s, params_t *params);
int get_modifier(char *s, params_t *params);

int print_from_to(char *start, char *stop, char *except);
int print_rot13(va_list ap, params_t *params);
int print_rev(va_list ap, params_t *params);

int print_number_right_shift(char *str, params_t *params);
int print_number_left_shift(char *str, params_t *params);
int print_number(char *str, params_t *params);
int _strlen(char *s);
int _isdigit(int c);

void innit_params(params_t *params, va_list ap);
char *get_precision(char *p, params_t *params, va_list ap);

int _puts(char *str);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
