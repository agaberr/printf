#include "main.h"
/**
* flag_char - print flags
* @flag: flag to print
*
* Return: number of character printed
*/

int flag_char(char flag)
{

	switch (flag)
	{
		case '+':

			_putchar('+');
			return (1);

		case ' ':
			_putchar(' ');
			return (1);

		case '#':
			_putchar('0');
			_putchar('x');
			return (2);

		default:
			return (0);
	}

}
