#include "main.h"
/**
* print_number - print number
* @num: number to print
*
* Return: number of character printed
*/

int num_recursion(int num);

int print_number(va_list args)
{

	int num = va_arg(args, int);

	num_recursion(num);
	return (num);
}
/**
* num_recursion - print number
* @num: number to print
*
* Return: number of character printed
*/

int num_recursion(int num)
{

	unsigned int i = 0;

	if (num < 0)
	{
		_putchar('-');
		i++;
		num = -num;
	}

	if (num / 10 != 0)
		num_recursion(num / 10);

	_putchar(num % 10 + '0');
	i++;

	return (i);

}
