#include "main.h"
/**
* print_space - print spaces
* @len: length of arg
* @width: width given
*
* Return: number of spaces
*/
int print_space(int len, int width)
{
	int i = 0, space_num = 0;

	if (width > len)
	{
		space_num = width - len;

		for (i = 0; i < space_num; i++)
			_putchar(' ');
	}

	return (i);
}
