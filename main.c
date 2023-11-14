#include "main.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	int len;

	int len2;
	int variable = 42;
	int *ptr = &variable;

	/*void *addr;*/
	/*addr = (void *)0x7ffe637541f0;*/


	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	 printf("%d\n",_printf("Length:[%d, %i]\n", len, len));
	 printf("%d\n",printf("Length:[%d, %i]\n", len2, len2));
	 printf("%d\n",_printf("Negative:[%d]\n", -762534));
	 printf("%d\n",printf("Negative:[%d]\n", -762534));
	 printf("%d\n",_printf("Character:[%c]\n", 'H'));
	 printf("%d\n",printf("Character:[%c]\n", 'H'));
	 printf("%d\n",_printf("String:[%s]\n", "I am a string !"));
	 printf("%d\n",printf("String:[%s]\n", "I am a string !"));
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	 printf("%d\n",_printf("%b \n", 98));
	 printf("%d\n",_printf("%u\n", 1234));
	 printf("%d\n",printf("%u\n", 1234));
	 printf("%d\n",_printf("%x\n", 16));
	 printf("%d\n",printf("%x\n", 16));
	 printf("%d\n",_printf("%X\n", 1234));
	 printf("%d\n",printf("%X\n", 1234));
	 printf("%d\n",_printf("%o\n", 1234));
	printf("%d\n",printf("%o\n", 1234));
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
	printf("%d\n",_printf("%c\n", 'A'));
	printf("%d\n",printf("%c\n", 'A'));
	printf("%d\n",_printf("%c\n", 'b'));
	printf("%d\n",printf("%c\n", 'b'));
	printf("%d\n",_printf("%c\n", '3'));
	printf("%d\n",printf("%c\n", '3'));
	printf("%d\n",_printf("%s", "Hello"));
	printf("%d\n",printf("%s", "Hello"));
	printf("%d\n",_printf("%s", "123"));
	printf("%d\n",printf("%s", "123"));
	printf("%d\n",_printf("Characters: %c, String: %s", 'X', "Mixed"));
	printf("%d\n",printf("Characters: %c, String: %s", 'X', "Mixed"));
	printf("%d\n",_printf("Combined: %c %s %c", 'Q', "Test", 'Z'));
	printf("%d\n",printf("Combined: %c %s %c", 'Q', "Test", 'Z'));
	printf("%d\n",_printf("%s", ""));
	printf("%d\n",printf("%s", ""));
	printf("%d\n",_printf("%s", NULL));
	/*printf("%d\n",printf("%s", NULL));*/
	printf("%d\n",_printf("Invalid: %d", 42));
	printf("%d\n",printf("Invalid: %d", 42));
	printf("%d\n",_printf("Mix: %c %s %%", 'K', "Mixed Specifiers"));
	printf("%d\n",printf("Mix: %c %s %%", 'K', "Mixed Specifiers"));

	printf("%d\n",_printf("Escape: %% %c %s", 'R', "Escape Test"));
	printf("%d\n",printf("Escape: %% %c %s", 'R', "Escape Test"));
	printf("%d\n",_printf("Edge: %c %s %%", '\0', "test"));
	printf("%d\n",printf("Edge: %c %s %%", '\0', "test"));
	printf("%d\n",_printf("Edge: %c %s %%", 'X', NULL));
	_printf("%S\n", "Best\nSchool"); /*should print ->  Best\x0ASchool*/
	printf("%d\n", _printf("%S\n", "Best\nSchool")); /*should print ->  15*/
	/*printf("%d\n",printf("Edge: %c %s %%", 'X', NULL));*/
	_printf("%r\n", "reversed string");
	printf("%d\n",_printf("%R\n", "AZ")); /*should print -> */

	_printf("%+d\n", 44687412);  
	_printf("%+d\n", -42);  
    _printf("% d\n", 42); 
    _printf("%#x\n", 255);


    printf("%d\n",_printf("The address is: %p\n", (const void *)ptr));
    printf("%d\n",printf("The address is: %p\n", (const void *)ptr));
    printf("%d\n",_printf("The address is: %p\n", NULL));
    printf("%d\n",printf("The address is: %p\n", NULL));
    printf("%d\n",_printf("The address is: %p\n", (void *)(ptr - 1)));
    printf("%d\n",printf("The address is: %p\n", (void *)(ptr - 1)));


	_printf("15%5c\n", 'A');
	_printf("%-5c51\n", 'A');

	_printf("15%5s\n", "hvi");
	_printf("%-5s51\n", "hvi");

	_printf("51%5d\n", 12);
	_printf("%-5d51\n", 12);

	_printf("51%5b\n", 10);
	_printf("%-5b51\n", 10);

	_printf("51%5u\n", 105);
	_printf("%-5u51\n", 121);

	_printf("51%5x\n", 255);
	_printf("%-5x51\n", 121);

	_printf("51%5X\n", 255);
	_printf("%-5X51\n", 155);

printf("****************************************************************\n");


	printf("%d\n",_printf("%R\n", "ARZ")); /*should print -> */









	/*_printf("Address:[%p]\n", addr);*/
    /*printf("Address:[%p]\n", addr);*/

	return (0);
}
