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
	if (!format)
		return (0);

	/*unsigned int numArgs = countArgs(format);*/

	int i, numChar = 0;

	va_list args;

	va_start(args, format);

	for (i = 0; format[i]; i++)
	{

		if (format[i] == '%')
		{
			numChar += getRightPrint(format[i + 1], args);
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
