#include "main.h"

/**
* get_base_8_len - get len of number
* @num: number provided
*
* Return: len of number
*/

int get_base_8_len(int num)
{

	/*Assuming a maximum of 12 Octal  digits for an unsigned int*/
	int index = 0;
	int i = 0;
	int count = 0;

	if (num == 0)
	{
		return (1);
	}

	/*Extract individual digits*/
	while (num > 0)
	{
		index++;
		num /= 8;
	}

	for (i = index - 1; i >= 0; i--)
	{
		count++;
	}
	return (count);
}
