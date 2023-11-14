#include "main.h"
/**
* null_ptr - print (nil) if it is called
*
* Return: number of characters of (nil)
*/
int null_ptr(void)
{
	int i;
	int count = 0;
	for (i = 0; i < 5; ++i)
	{
		_putchar("(nil)"[i]);
		count++;
	}
	return (count);
}
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
	int count = 2;
	int nonZeroEncountered = 0;
	(void)format;

	if (ptr == NULL)
		return (null_ptr());
	/* Print "0x" prefix*/
	_putchar('0');
	_putchar('x');
	/* Print hexadecimal representation of the address*/
	shift = sizeof(void *) * 8 - 4;  /* Adjust shift for 32 or 64-bit systems*/
	while (shift >= 0)
	{
		digit = (address >> shift) & 0xF;
		if (digit != 0 || nonZeroEncountered)
		{
		_putchar(digit < 10 ? '0' + digit : 'a' + digit - 10);
		count++;
		nonZeroEncountered = 1;
		}
		shift -= 4;
	}
	if (!nonZeroEncountered)
	{
		_putchar('0');
		count++;
	}
	return (count);
}
