#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

#define BUFF_FLUSH -1
#define OUTPUT_BUFF_SIZE 1024
#define PARAMS_INIT {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
#define NULL_STRING "(null)"
#define CONVERT_UNSIGNED 2
#define CONVERT_LOWERCASE 1
/**
 * struct para - parameters of struct
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
typedef struct para
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
} para_m;

/**
 * struct spec - token of struct
 * @spec: token format
 * @f: associated function
 */
typedef struct spec
{
	char *spec;
	int (*f)(va_list, para_m *);
} spec_m;

int print_S(va_list data, para_m *par);
int print_percent(va_list data, para_m *par);
int print_int(va_list data, para_m *par);
int print_string(va_list data, para_m *par);
int print_char(va_list data, para_m *par);

int print_binary(va_list data, para_m *par);
int print_HEX(va_list data, para_m *par);
int print_hex(va_list data, para_m *par);
int print_octal(va_list data, para_m *par);

int print_address(va_list data, para_m *par);
int print_unsigned(va_list data, para_m *par);
char *convert(long int num, int base, int flags, para_m *par);

int (*get_specifier(char *s))(va_list data, para_m *par);
int get_print_func(char *s, va_list data, para_m *par);
char *get_width(char *s, para_m *par, va_list data);
int get_flag(char *s, para_m *par);
int get_modifier(char *s, para_m *par);

int print_from_to(char *stt, char *stp, char *ext);
int print_rot13(va_list data, para_m *par);
int print_rev(va_list data, para_m *par);

int print_number_right_shift(char *str, para_m *par);
int print_number_left_shift(char *str, para_m *par);
int print_number(char *str, para_m *par);
int _strlen(char *s);
int _isdigit(int c);

void init_params(para_m *par, va_list data);
char *get_precision(char *i, para_m *par, va_list data);

int print_str(char *str);
int _putchar(int c);
int _printf(const char *format, ...);

#endif
