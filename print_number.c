#include "main.h"
/**
* print_number - print number
* @num: number to print
*
* Return: number of character printed
*/

int num_recursion(int num);

int print_number(va_list args, char *format)
{
	int num = va_arg(args, int);
	int i = 0, j, k;
	char flag;
	char *min = "-2147483648";

	for (k = 0; format[k]; k++)
	{
		if (format[k] == '+' || format[k] == '#' || format[k] == ' ')
		{
			flag = format[k];
			i += flag_char(flag, num);
			break;
		}
	}

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	if (num == INT_MIN)
	{
		for (j = 0; min[j]; j++)
		{
			_putchar(min[j]);
		}
		return (j);
	}

	i = num_recursion(num);
	return (i);
}
/**
* num_recursion - print number
* @num: number to print
*
* Return: None
*/

int num_recursion(int num)
{

	int i = 0;


	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	if (num < 0)
	{
		_putchar('-');
		i++;
		num *= -1;
	}

	if (num / 10 != 0)
		i += num_recursion(num / 10);

	_putchar(num % 10 + '0');
	return (i + 1);

}
