#include "main.h"
/**
* print_space - print spaces
* @len: length of arg
* @width: width given
* @is_zero: if zero flag print  instead of spaces
*
* Return: number of spaces
*/
int print_space(int len, int width, int is_zero)
{
	int i = 0, space_num = 0;

	if (width > len)
	{
		space_num = width - len;

		for (i = 0; i < space_num; i++)
		{
			if (is_zero)
				_putchar('0');
			else
				_putchar(' ');
		}
	}

	return (i);
}
