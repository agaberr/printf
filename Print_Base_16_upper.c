#include "main.h"
/**
* Print_Base_16_upper - print an unsigned integer in base 16 (Hexa) upper.
* @args: the unsigned int it takes
* @format: format to print
*
* Return: number of printed digits.
*/
int Print_Base_16_upper(va_list args, char *format)
{
	unsigned int num = va_arg(args, unsigned int);

	int remainder;

	char hexDigits[16];

	int index = 0;

	int count = 0;

	int i = 0;
	(void)format;


	if (num == 0)
	{
	_putchar(48);
		return (1);
	}


	while (num > 0)
	{
	remainder = num % 16;
	hexDigits[index++] = (remainder < 10)
	? ('0' + remainder) : ('A' + remainder - 10);
	num /= 16;
	}

	for (i = index - 1; i >= 0; i--)
	{
	_putchar(hexDigits[i]);
	count++;
	}
	return (count);
}
