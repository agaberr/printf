#include "main.h"
/**
* get_width - get the width from specifier
* @format: string given
* @is_zero: is zero flag
*
* Return: width
*/
int get_width(char *format, int *is_zero)
{
	int width = 0, i = 0, sign = 0, k = 0;

	if ((format[0] == '0') || (format[1] == '0' && !isdigit(format[0])))
	{
		*is_zero = 1;
	}

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '.')
			return (width);

		if (format[i] == '-')
			sign = 1;

		if (((format[0] == '0') || (format[1] == '0' && !isdigit(format[0]))) && !k)
		{
			i++;
			k = 1;
		}

		if (format[i] >= '0' && format[i] <= '9')
		{
		width = width * 10 + (format[i] - 48);
		}
	}

	if (sign == 1)
		width *= -1;

	return (width);
}
