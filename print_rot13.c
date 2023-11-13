#include "main.h"

/**
* print_rot13 - encodes a string using rot13
* @str: string to print
*
* Return: number of chars printed
*/

char *rot13(char *str);

int print_rot13(va_list args)
{

	char *s = va_arg(args, char *);

	char *str_to_print = rot13(s);

	int i, n = strlen(s);

	for (i = 0; i < n; i++)
	{
		_putchar(str_to_print[i]);
	}

	return (n);

}

/**
* rot13 - encodes a string using rot13
* @str: string to encode
*
* Return: encoded string
*/

char *rot13(char *str)
{

	char *str_copy = malloc(strlen(str) + 1);

	char alphabet[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};

	char rot13Alpha[] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};

	int i, j;

	for (i = 0; str[i]; i++)
		for (j = 0; alphabet[j]; j++)
			if (str[i] == alphabet[j])
			{
				str_copy[i] = (rot13Alpha[j]);
				break;
			}

	return (str_copy);
}
