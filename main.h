#ifndef MAIN_H
#define MAIN_H
#include "_format.h"
#include <stdarg.h>
#include <stdlib.h>

/* lib function*/
int _printf(const char *_format, ...);
int _isprintable(int c);
void print_number(int n, int *size);
int _putchar(char c);
void _puts(char *str);
unsigned int _strlen(char *s);
void binary_func(unsigned int nb, int *size);
void octo_func(unsigned int nb, int *size);
void hex_up_func(unsigned int nb, int *size);
void hex_low_func(unsigned int nb, int *size);
void print_number_u(unsigned int n, unsigned int *size);
void _putstr(char *str);
void hex_S(unsigned int nb, int *size);
void hex_addr(unsigned long int addr, int *size);
#endif /*MAIN_H*/
