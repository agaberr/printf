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

int _printf(const char *format, ...);


#endif
