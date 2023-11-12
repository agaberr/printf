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

	unsigned long int i;

	for (i = 0; i < strlen(str); i++)
		_putchar(str[i]);

	return (i);
}
