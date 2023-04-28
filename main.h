#ifndef MAIN_H
#define MAIN_H
#include "_format.h"
#include <stdarg.h>
#include <stdlib.h>


int _printf(const char *_format, ...);
int _isprintable(int c);
void print_number(int n, int *size);
int _putchar(char c);
int is_digit(char c);
void _puts(char *str);
unsigned int _strlen(char *s);
void binary_func(unsigned int nb, int *size);
void octo(unsigned int nb, int *size);
void hex_up(unsigned int nb, int *size);
void hex_low(unsigned int nb, int *size);
void print_number_u(unsigned int n, unsigned int *size);
void _putstr(char *str);
void hex_S(unsigned int nb, int *size);
void hex_addr(unsigned long int addr, int *size);
int get_flags(const char *format, int *i);
int get_precision(const char *format, int *i, va_list list);
#endif
