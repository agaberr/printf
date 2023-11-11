#include "main.h"

/**
* countArgs - count number of arguments passed by function printf
* @format: format string
*
* Return: the number of arguments
*
*/

unsigned int countArgs(const char *format)
{

	unsigned int i, j, count = 0;

	char *directives = "cs"; /*#define it later*/

	unsigned int dirlen = 0;


	while (directives[dirlen])
		dirlen++;

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; j < dirlen; j++)
			{
				if (format[i + 1] == directives[j])
				{
					i++;
					count++;
					break;
				}
			}
		}
	}

	return (count);

}
