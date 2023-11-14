#include "main.h"
/**
* print_char - print character
* @args: character to print
* @format: format to print
*
* Return: number of character printed
*/

int print_char(va_list args, char *format)
{
	char c = va_arg(args, int);
	(void)format;

	_putchar(c);
	return (1);
}
