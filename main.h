#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <string.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>


int _putchar(char c);


/**
* struct op - the struct of op
*
* @op: operator
* @f: function
*/
typedef struct op
{
	char op;

	int (*f)(va_list, char *format);

} op_t;

int (*get_print_func(char *format))(va_list, char *);

int print_char(va_list args, char *format);
int print_string(va_list args, char *format);
int print_number(va_list args, char *format);
int print_mod(va_list args, char *format);
int Print_Binary(va_list args, char *format);
int Print_Base_10(va_list args, char *format);
int Print_Base_16_upper(va_list args, char *format);
int Print_Base_16_int(int num);
int Print_Base_16_lower(va_list args, char *format);
int Print_Base_8(va_list args, char *format);
int print_string_only(va_list args, char *format);
int print_rev_string(va_list args, char *format);
int print_rot13(va_list args, char *format);

int flag_char(char flag);
int is_specifier(char c);

int _printf(const char *format, ...);


#endif
