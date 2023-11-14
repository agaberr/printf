/**
* is_specifier - is the character provided contain specifier or not
* @c: character provided
*
* Return: 1 if char is a specifier
*/

int is_specifier(char c)
{

	char *specifiers = "csdibuoxXSrRp";
	int i;

	for (i = 0; specifiers[i]; i++)
	{
		if (c == specifiers[i] || c == '%')
			return (1);
	}

	return (0);
}
