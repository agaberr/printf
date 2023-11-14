#include "main.h"

/**
* get_num_len - get len of number
* @num: number provided
*
* Return: len of number
*/

int get_num_len(int num)
{
	unsigned int size = 0;

	if (num < 0)
	{
		size++;
		num = -num;
	}

	do {
		size++;
		num /= 10;
	} while (num != 0);

	return (size);
}
