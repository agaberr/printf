#include "main.h"
/**
* print_pointer - print address
* @args: address to print
* @format: format to print
*
* Return: number of character printed
*/
int print_pointer(va_list args, char *format)
{
	const void *ptr = va_arg(args, char *);
	unsigned long address = (unsigned long)ptr;

	int shift, digit;
	int count = 0;
	(void)format;

	/* Print "0x" prefix*/
	_putchar('0');
	_putchar('x');
	_putchar('0');
	_putchar('0');
	_putchar('0');
	_putchar('0');
	count += 6;

	/* Print hexadecimal representation of the address*/

	shift = sizeof(void *) * 8 - 4;  /* Adjust shift for 32 or 64-bit systems*/

	while (shift >= 0)
	{
		digit = (address >> shift) & 0xF;
		_putchar(digit < 10 ? '0' + digit : 'a' + digit - 10);
		count++;
		shift -= 4;
	}
	return (count);
}
