#include "main.h"
/**
* Print_Base_16_lower - print an unsigned integer in base 16 (Hexa) Lower.
* @args: the unsigned int it takes
* @format: format to print
*
* Return: number of printed digits.
*/
int Print_Base_16_lower(va_list args, char *format)
{
	unsigned int num = va_arg(args, unsigned int);
	int k, i = 0;
	char flag;
	int remainder;
	char hexDigits[16];
	int index = 0, count = 0;

	if (num == 0)
	{
	_putchar(48);
		return (1);
	}

	for (k = 0; format[k]; k++)
	{
		if (format[k] == '+' || format[k] == '#' || format[k] == ' ')
		{
			flag = format[k];
			i += flag_char(flag, num);
			break;
		}
	}


	while (num > 0)
	{
	remainder = num % 16;
	hexDigits[index++] = (remainder < 10)
	? ('0' + remainder) : ('a' + remainder - 10);
	num /= 16;
	}

	for (i = index - 1; i >= 0; i--)
	{
	_putchar(hexDigits[i]);
	count++;
	}
	return (count);
}
