#include "main.h"

/**
* getRightPrint - go to right function
* @type: type of passed char
* @args: pointer to va_args
*
* Return: number of chars printed
*/
int getRightPrint(char type, va_list args)
{
	int n = 0;

	switch (type)
	{
		case 'c':

			n = printChar(va_arg(args, int));
			break;

		case 's':
			n = printString(va_arg(args, char *));
			break;

		case '%':
			n = printMod();
			break;

		case 'd':
			n = printNumber(va_arg(args, int));
			break;

		case 'i':
			n = printNumber(va_arg(args, int));
			break;
		case 'b':
			n = Print_Binary(va_arg(args, unsigned int));
			break;
		case 'u':
			n = Print_Base_10(va_arg(args, unsigned int));
			break;
		case 'o':
			n = Print_Base_8(va_arg(args, unsigned int));
			break;
		case 'x':
			n = Print_Base_16_upper(va_arg(args, unsigned int));
			break;
		case 'X':
			n = Print_Base_16_lower(va_arg(args, unsigned int));
			break;

	}

	return (n);

}

/***************************PRINT FUNCTIONS***************************/

/**
* printChar - print character
* @c: character to print
*
* Return: number of character printed
*/

int printChar(char c)
{
	_putchar(c);
	return (1);
}


/**
* printString - print string
* @str: string to print
*
* Return: number of character printed
*/
int printString(char *str)
{
	unsigned long int i;

	for (i = 0; i < strlen(str); i++)
		_putchar(str[i]);

	return (i);
}

/**
* printNumber - print number
* @num: number to print
*
* Return: number of character printed
*/
int printNumber(int num)
{
	unsigned int i = 0;

	if (num < 0)
	{
		_putchar('-');
		i++;
		num = -num;
	}

	if (num / 10 != 0)
		printNumber(num / 10);

	_putchar(num % 10 + '0');
	i++;

	return (i);
}

/**
* printMod - print modulus (%)
*
* Return: number of character printed
*/
int printMod(void)
{
	_putchar('%');
	return (1);
}
