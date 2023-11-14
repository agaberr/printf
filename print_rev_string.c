#include "main.h"

/**
* print_rev_string - reverse string
* @s: string to be reversed
*
* Return: number of characters
*/

void _print_rev_recursion(char *s);

int print_rev_string(va_list args, char *format)
{
	char *s = va_arg(args, char *);

	int n = strlen(s);
	(void)format;

	_print_rev_recursion(s);
	return (n);

}

/**
* _print_rev_recursion - prints string reversed
* @s: string to print
*
* Return: None;
*/

void _print_rev_recursion(char *s)
{

	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}
