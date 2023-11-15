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
	int x = 0;
		int *is_zero = &x;
	int width = get_width(format, is_zero);

	if (width > 0)
		print_space(1, width, *is_zero);
	_putchar(c);
	if (width < 0)
	{
		print_space(1, -width, *is_zero);
		width *= -1;
	}

	if (width > 1)
		return (width);
	return (1);
}
