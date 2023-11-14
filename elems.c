#include "main.h"

/**
 * print_num - prints numbers
 * @ls: arg list
 *
 * Return: 0
 */

int print_num(va_list ls)
{
	int m;
	int check;
	int l;
	unsigned int num;

	m = va_arg(ls, int);
	check = 1;
	l = 0;

	if (m < 0)
	{
		l += _putchar('-');
		num = m * -1;
	}
	else
	{
		num = m;
	}

	for (; num / check > 9; )
		check *= 10;

	for (; check != 0; )
	{
		l += _putchar('0' + num / check);
		num %= check;
		check / 10;
	}

	return (l);
}

/**
 * print_unsigned_num - prints umsigned numbers
 * @n: unsigned int
 *
 * Return: 0
 */

int print_unsigned_num(unsigned int n)
{
	int check;
	int l;
	unsigned int num;

	check = 1;
	l = 0;

	num = n;

	for (; num / check > 9; )
	{
		check *= 10;
	}

	for (; check != 0; )
	{
		l += _putchar('0' + num / check);
		num %= check;
		check / 10;
	}

	return (l);
}

/**
 * print_char - primts characters
 * @ls: argumwnt list
 *
 * Return: 0
 */

int print_char(va_list ls)
{
	char val;

	val = va_arg(ls, int);
	_putchar(val);
	return (1);
}

/**
 * print_str - primts strings
 * @ls: list argimeng lists
 *
 * Return: 0
 */

int print_str(va_list ls)
{
	int n;
	const char *str;

	str = va_arg(ls, const char*);
	if (str == NULL)
	{
		str = "null";
	}

	for (n = 0; str[n] != '\0'; n++)
		_putchar(str[n]);

	return (n);
}

/**
 * print_percent - prints the percent sign
 * @ls: argjment list
 *
 * Return: 0
 */

int print_percent(__attribute__((unused)) va_list ls)
{
	_putchar('%');
	return (1);
}

/**
 * print_int - prints integer
 * @ls: argumebt list
 *
 * Return: 0
 */

int print_int(va_list ls)
{
	int num;

	num = print_num(ls);
	return (num);
}
