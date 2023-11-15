#include "main.h"
/**
* print_string - print string
* @args: string to print
* @format: format to print
*
* Return: number of character printed
*/
int print_string(va_list args, char *format)
{
	char *str = va_arg(args, char *);
	int i;
	int x = 0;
	int *is_zero = &x;
	int width = get_width(format, is_zero);
	int size;

	if (str == NULL)
		str = "(null)";

	size = strlen(str);

	if (width > 0)
		print_space(strlen(str), width, *is_zero);


	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}

	if (width < 0)
	{
		print_space(strlen(str), -width, *is_zero);
		width *= -1;
	}

	if (width > size)
		return (width);
	return (size);
}
