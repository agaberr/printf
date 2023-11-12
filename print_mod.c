#include "main.h"
/**
* print_mod - print modulus (%)
* @args: nothing
*
* Return: number of character printed
*/
int print_mod(va_list args)
{
	va_arg(args, void *);
	_putchar('%');
	return (1);
}
