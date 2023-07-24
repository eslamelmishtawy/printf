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
	char *l;
	unsigned int i = 0, count = 0;

	va_start(valist, format);
	printf("%c", format[0][1]);
	while (format && format[i])
	{
		l = va_arg(valist, char *);
		printf("%s", l);
		printf("%c", l[0]);
		i++;
	}
	va_end(valist);
	return (count);
}
