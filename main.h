#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <string.h>


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

	int (*f)(va_list);

} op_t;

int (*get_print_func(char format))(va_list);

int print_char(va_list args);
int print_string(va_list args);
int print_number(va_list args);
int print_mod(va_list args);

int _printf(const char *format, ...);


#endif
