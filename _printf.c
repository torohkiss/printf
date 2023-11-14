#include "main.h"

/**
 * _printf - primts output
 * @format: first arg
 *
 * Return: 0
 */

int _printf(const char *format,...)
{
	int pc;

	conver_t func_list[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_percent},
		{"d", print_int},
		{"i", print_int},
		{NULL, NULL}
	};

	va_list ls;

	if (format == NULL)
		return (-1);

	va_start(ls, format);

	pc = parser(format, func_list, ls);

	va_end(ls);

	return (pc);
}
