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
	int width = get_width(format);
	int size;

	if (str == NULL)
		str = "(null)";

	size = strlen(str);

	if (width > 0)
		print_space(strlen(str), width);


	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}

	if (width < 0)
	{
		print_space(strlen(str), -width);
		width *= -1;
	}

	if (width > size)
		return (width);
	return (size);
}
