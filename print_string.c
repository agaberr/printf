#include "main.h"
/**
* print_string - print string
* @args: string to print
*
* Return: number of character printed
*/
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;

	if (str == NULL)
		str = "(null)";

	while (*str != '\0')
	{
		count++;
		_putchar(*str++);

	}

	return (count);
}
