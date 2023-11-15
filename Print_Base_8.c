#include "main.h"
/**
* Print_Base_8 - print an unsigned integer in base 8 (Octal).
* @args: the unsigned int it takes
* @format: string format
*
* Return: number of printed digits.
*/
int Print_Base_8(va_list args, char *format)
{


	unsigned int num = va_arg(args, unsigned int);
	unsigned int size = get_base_8_len(num);
	int x = 0;
	int *is_zero = &x;
	int width = get_width(format, is_zero);

	/*Assuming a maximum of 12 Octal  digits for an unsigned int*/
	char Oct_digits[12];
	int index = 0;
	int i = 0;
	int count = 0;

	if (width > 0)
		print_space(size, width, *is_zero);

	if (num == 0)
	{
		_putchar(48);
		return (1);
	}

	/*Extract individual digits*/
	while (num > 0)
	{
		Oct_digits[index++] = 48 + (num % 8);
		num /= 8;
	}

	for (i = index - 1; i >= 0; i--)
	{
		_putchar(Oct_digits[i]);
		count++;
	}

	if (width < 0)
		print_space(size, -width, *is_zero);

	return (count + width);
}
