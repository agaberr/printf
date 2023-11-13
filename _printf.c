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

	va_list args;

	int (*print_func)(va_list) = NULL;


	if (format == NULL || strlen(format) == 0)
		return (0);

	va_start(args, format);

	for (i = 0; format[i]; i++)
	{

		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{
				break;
			}

			print_func = get_print_func(format[i + 1]);
			if (print_func != NULL)
                numChar += print_func(args);
            else
                _putchar('%');
			i++;
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
