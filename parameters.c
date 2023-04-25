#include "main.h"

/**
 * init_params - a function that clears fields and reset buff
 * @par: paramaters struct
 * @data: argument
 *
 * Return: void
 */

void init_params(para_m *par, va_list data)
{
	par->unsign = 0;
	par->plus_flag = 0;
	par->minus_flag = 0;
	par->space_flag = 0;
	par->precision = UINT_MAX;
	par->hashtag_flag = 0;
	par->width = 0;
	par->zero_flag = 0;
	par->l_modifier = 0;
	par->h_modifier = 0;
	(void)data;
}
