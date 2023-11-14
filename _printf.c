#include "main.h"

/**
* _printf - produces output according to a format
* @format: a character string. The format
* string is composed of zero or more directives.
*
* Return: the number of characters printed
* (excluding the null byte used to end output to strings)
*/

int _printf(const char *format, ...)
{
	int i, numChar = 0;
	char *arg_format = NULL;
	int arg_format_idx;

	va_list args;

	int (*print_func)(va_list, char *) = NULL;

	if (format == NULL || strlen(format) == 0)
		return (0);
	va_start(args, format);

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			arg_format_idx = 0;
			arg_format = malloc(strlen(format) + 1);
			if (format[i + 1] == '\0')
				break;
			while (!is_specifier(format[i + 1]) && format[i + 1] != '\0')
			{
				arg_format[arg_format_idx++] = format[i + 1];
				i++;
			}
			arg_format[arg_format_idx] = format[i + 1];
			arg_format[arg_format_idx + 1] = '\0';
			print_func = get_print_func(arg_format);
			numChar += print_func(args, arg_format);
			i++;
			free(arg_format);
		}
		else
		{
			_putchar(format[i]);
			numChar++;
		}
	}
	va_end(args);
	return (numChar);
}
