#include "main.h"
#include <stdio.h>
/**
 * _printf - test
 * @format: kdjlasd
 * Return: tes
 */

int _printf(const char *format, ...)
{
	va_list valist;
	int x;
	int i = 0, count = 0;
	char percent;

	va_start(valist, format);
	while (format[i] && format)
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					x = va_arg(valist, int);
					write(1, &x, 1);
					break;
				case '%':
					percent = '%';
					write(1, &percent, 1);
					break;
			}
		}
		else
		{
			write(1, &format[i], 1);
		}
		i++;
		count++;
	}
	va_end(valist);
	return (count);
}
