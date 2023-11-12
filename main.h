#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <string.h>


int _putchar(char c);
unsigned int countArgs(const char *format);

int getRightPrint(char type, va_list args);
int printChar(char c);
int printString(char *str);
int printNumber(int num);
int printMod(void);
/*Print Unsigned into Binary by ****SEIF*****/
int Print_Binary(unsigned int num);
int Print_Base_10(unsigned int num);
int Print_Base_16_upper(unsigned int num);
int Print_Base_16_lower(unsigned int num);
int Print_Base_8(unsigned int num);

int _printf(const char *format, ...);


#endif
