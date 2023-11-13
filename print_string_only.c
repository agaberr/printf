#include "main.h"
/**
* print_non_alpha - print character that is not alpha
* @c: character to print
*
* Return: number of chars printed
*/

int print_non_alpha(char c)
{

	int num = (int)c;

	_putchar('\\');
	_putchar('x');
	Print_Base_16_int(num);

	return (4);
}

/**
* print_string_only - print string
* @args: str to print
*
* Return: number of character printed
*/

int print_string_only(va_list args)
{
	char *str = va_arg(args, char *);

	int count = 0;

	if (str == NULL)
		str = "(null)";

	while (*str != '\0')
	{

		if (str == NULL || *str == '\0') /*added by Chatgpt*/
		{
			break;
		}

		if (*str < 32 || *str >= 127)
			count += print_non_alpha(*str);
		else
		{
			count++;
		    _putchar(*str);
		}
		str++;
	}

	return (count);
}

