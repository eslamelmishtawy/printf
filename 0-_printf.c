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
	int i = 0, count = 0;

	va_start(valist, format);
	while (format[i] && format)
	{
		write(1, &format[i], 1);
		count++;
		i++;
	}
	va_end(valist);
	return (count);
}
