#include "main.h"
/**
* get_width - get the width from specifier
* @format: string given
*
* Return: width
*/
int get_width(char *format)
{
	int width = 0, i, sign = 0;

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '.')
			return (width);

		if (format[i] == '-')
			sign = 1;

		if (format[i] >= '0' && format[i] <= '9')
		{
		width = width * 10 + (format[i] - 48);
		}
	}

	if (sign == 1)
		width *= -1;

	return (width);
}
