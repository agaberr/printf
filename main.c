#include "main.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	int len;

	int len2;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("%b \n", 98);
	_printf("%u\n", 1234);
	printf("%u\n", 1234);
	_printf("%x\n", 16);
	printf("%x\n", 16);
	_printf("%X\n", 1234);
	printf("%X\n", 1234);
	_printf("%o\n", 1234);
	printf("%o\n", 1234);
	printf("%d\n",_printf("%d\n", 42));
	printf("%d\n",printf("%d\n", 42));
	printf("%d\n",_printf("%d\n", -42));
	printf("%d\n",printf("%d\n", -42));
	printf("%d\n",_printf("%d\n", 0));
	printf("%d\n",printf("%d\n", 0));
	printf("%d\n",_printf("%d\n", 2147483647));
	printf("%d\n",printf("%d\n", 2147483647));
	printf("%d\n",_printf("%d\n", -2147483647));
	printf("%d\n",printf("%d\n", -2147483647));
	printf("%d\n",_printf("%d\n", INT_MAX));
	printf("%d\n",printf("%d\n", INT_MAX));
	printf("%d\n",_printf("%d\n", INT_MIN));
	printf("%d\n",printf("%d\n", INT_MIN));

	return (0);
}
