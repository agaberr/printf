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
	int width = get_width(format);

	if (width > 0)
		print_space(1, width);
	_putchar(c);
	if (width < 0)
		print_space(1, -width);

	return (width);
}
