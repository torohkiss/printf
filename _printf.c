#include "main.h"
#include <stdarg.h>

int _printf(const char *format, ...)
{
	int ch = 0;

	va_list ls;

	if (format == NULL)
		return (-1);

	va_start(ls, format);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			ch++;
		}
		else
		{
			format++;
			
			if (*format == '\0')
			{
				break;
			}

			if (*format == '%')
			{
				write(1, format, 1);
				ch++;
			}
			else if (*format == 'c')
			{
				char q = va_arg(ls, int);
				write(1, &q, 1);
				ch++;
			}
			else if (*format == 's')
			{
				char *np = va_arg(ls, char*);
				int str_len = 0;

				while (np[str_len] != '\0')
					str_len++;

				write(1, np, str_len);
				ch += str_len;
			}
		}

		format++;
	}
	va_end(ls);

	return (ch);
}
