#include "main.h"

/**
* get_print_func - go to the right function
* @format: format provided to call print
*
* Return: function pointer to the appropriate print function
*/

int (*get_print_func(char *format))(va_list, char *)
{
	op_t ops[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_number},
		{'i', print_number},
		{'%', print_mod},
		{'b', Print_Binary},
		{'u', Print_Base_10},
		{'o', Print_Base_8},
		{'x', Print_Base_16_lower},
		{'X', Print_Base_16_upper},
		{'S', print_string_only},
		{'r', print_rev_string},
		{'R', print_rot13},
		{'p', print_pointer},
		{'\0', NULL}
	};

	int i = 0, j;

	if (!format)
		return (NULL);

	while (ops[i].specifier)
	{
		j = 0;
		while (format[j])
		{
			if (ops[i].specifier == format[j])
				return (ops[i].f);
			j++;
		}
		i++;
	}

	return (NULL);
}
