#include "main.h"

/**
* get_print_func - go to the right function
* @format: format provided to call print
*
* Return: function pointer to the appropriate print function
*/

int (*get_print_func(const char format))(va_list)
{
	op_t ops[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_number},
		{'i', print_number},
		{'%', print_mod},
		{'\0', NULL}
	};

	int i = 0;

	while (ops[i].op)
	{
		if (format && ops[i].op == format)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
