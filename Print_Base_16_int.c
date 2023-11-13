#include "main.h"
/**
* Print_Base_16_int - print an unsigned integer in base 16 (Hexa) upper.
* @num: number to print
*
* Return: number of printed digits.
*/
int Print_Base_16_int(int num)
{

	int remainder;

	char hexDigits[16];

	int index = 0;

	int count = 0;

	int i = 0;


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

	if (index == 1)
	{
		_putchar('0');
		_putchar(hexDigits[0]);
		return (2);
	}

	for (i = index - 1; i >= 0; i--)
	{
	_putchar(hexDigits[i]);
	count++;
	}
	return (count);
}
