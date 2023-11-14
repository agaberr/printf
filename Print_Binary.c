#include "main.h"
/**
* Print_Binary - convert the unsigned int int binary and print it
* @args: the unsigned int it takes
* @format: format to print
*
* Return: number of printed digits.
*/
int Print_Binary(va_list args, char *format)
{
	unsigned int num = va_arg(args, unsigned int);
	int width = get_width(format);
	unsigned int size = get_binary_len(num);



	int bits[64];  /*Assuming 64-bit unsigned int*/
	int index = 0;
	int count = 0;
	int i;

	if (width > 0)
		print_space(size, width);

	if (num == 0)
	{
		_putchar(48);
		return (1);
	}

	while (num > 0)
	{
		bits[index++] = num % 2;
		num /= 2;
	}
	for (i = index - 1; i >= 0; i--)
	{
		_putchar(48 + bits[i]);
		count++;
	}
	if (width < 0)
	{
		print_space(size, -width);
		width *= -1;
	}

	if ((unsigned int)width > size)
		return (width);
	else
		return (size);
}
