#include "main.h"
/**
* Print_Base_10 - print an unsigned integer in base 10 (decimal).
* @args: the unsigned int it takes
*
* Return: number of printed digits.
*/
int Print_Base_10(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);

	char digits[10];  /*Assuming a maximum of 10 digits for an unsigned int*/

	int index = 0;

	int count = 0;

	int i = 0;

	if (num == 0)
	{
		_putchar(48);
		return (1);
	}


	/*Extract individual digits*/
	while (num > 0)
	{
		digits[index++] = 48 + (num % 10);
		num /= 10;
	}

	for (i = index - 1; i >= 0; i--)
	{
		_putchar(digits[i]);
		count++;
	}
	return (count);
}
