#include "main.h"
/**
* print_char - print character
* @args: character to print
*
* Return: number of character printed
*/

int print_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (1);
}
