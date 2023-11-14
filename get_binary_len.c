#include "main.h"

/**
* get_binary_len - get len of number
* @num: number provided
*
* Return: len of number
*/

int get_binary_len(int num)
{

	int index = 0;
	int count = 0;
	int i;

	if (num == 0)
	{
		return (1);
	}

	while (num > 0)
	{
		index++;
		num /= 2;
	}
	for (i = index - 1; i >= 0; i--)
	{
		count++;
	}
	return (count);
}
