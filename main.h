#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>


/**
* struct specifier - Struct that contains two data types
* @fmt: The format.
* @fn: The function associated.
*/
typedef  struct specifier
{
char fmt;
int (*fn)(va_list, char[], int, int, int, int);
} fmt_t;

int _printf(const char *format, ...);
int handle_print(const char *fmt, int *i, va_list list, char buffer[],
int flags, int width, int precision, int size);

/* User define Funtions to print chars and strings */

int print_char(va_list types, char buffer[],
int flags, int width, int precision, int size);
int print_string(va_list types, char buffer[],
int flags, int width, int precision, int size);
int print_percent(va_list types, char buffer[], int flags,
int width, int precision, int size);




#endif


