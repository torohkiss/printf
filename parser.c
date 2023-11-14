#include "main.h"

/**
 * parser - parses intts ans xgars
 * @format: arg one
 * @ls: arg lisg
 *
 * Return: 0
 */

int parser(const char *format, conver_t func_list[], va_list ls)
{
	int i;
	int j;
	int val;
	int pc;

	pc = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; func_list[j].sym != NULL; j++)
			{
				if (format[i + 1] == func_list[j].sym[0])
				{
					val = func_list[j].f(ls);
					if (val == -1)
						return (-1);
					pc += val;
					break;
				}
			}
			if (func_list[j].sym == NULL && format[i + ] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					pc = pc + 2;
				}
				else
				{
					return (-1);
				}
			}
			i += 1;
		}
		else
		{
			_putchar(format[i]);
			pc++;
		}
	}
	return (pc);
}
