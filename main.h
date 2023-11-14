#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert conver_t;

int _printf(const char *format, ...);
int binary(int num);
int octal(int num);
int _putchar(char c);
void vprintf(const char *format, va_list ls);
int parser(const char *format, conver_t func_list[], va_list ls);
int print_char(va_list ls);
int print_int(va_list ls);
int print_percent(va_list);
int print_str(va_list);
int print_num(va_list);
int print_unsigned_num(unsigned int n);

#endif
