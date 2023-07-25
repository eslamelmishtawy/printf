#include "main.h"

/**
 * _printf - test
 * @format: kdjlasd
 * Return: tes
 */
int _printf(const char *format, ...)
{
	va_list valist;
	int x, i = 0, count = 0;
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
				case 's':
					count = count + count_str(va_arg(valist, char *));
					count--; /* going to be added at the end of the loop */
					break;
				case 'i':
				case 'd':
					x = va_arg(valist, int);
					print_int(x);
					break;
				default:
					return (-1);
			}
		}
		else
			write(1, &format[i], 1);
		i++;
		count++;
	}
	va_end(valist);
	return (count);
}
