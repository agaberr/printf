#include "main.h"

/**
* get_base_16_len - get len of number
* @num: number provided
*
* Return: len of number
*/

int get_base_16_len(int num)
{

	int i = 0;
	int index = 0, count = 0;

	if (num == 0)
	{
		return (1);
	}

	while (num > 0)
	{
		index++;
	num /= 16;
	}

	for (i = index - 1; i >= 0; i--)
	{
	count++;
	}
	return (count);
}
