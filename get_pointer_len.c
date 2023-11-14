#include "main.h"

/**
* get_pointer_len - get len of number
* @ptr: address provided
*
* Return: len of number
*/

int get_pointer_len(const void *ptr)
{

	unsigned long address = (unsigned long)ptr;
	int shift, digit, i;
	int count = 0;
	int nonZeroEncountered = 0;

	if (ptr == NULL)
	{
		for (i = 0; i < 5; ++i)
		{
			count++;
		}
		return (count);
	}
	count += 2;
	shift = sizeof(void *) * 8 - 4;  /* Adjust shift for 32 or 64-bit systems*/
	while (shift >= 0)
	{
		digit = (address >> shift) & 0xF;
		if (digit != 0 || nonZeroEncountered)
		{
		count++;
		nonZeroEncountered = 1;
		}
		shift -= 4;
	}
	if (!nonZeroEncountered)
	{
		count++;
	}
	return (count);
}
