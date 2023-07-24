#include "main.h"
#include <stdio.h>

/**
 * count_str - to count and print string
 * @str: string to be counted
 * Return: return the number of char in string.
 */

int count_str(char *str)
{
	int string_len = 0;

	while (str[string_len] && str)
	{
		write(1, &str[string_len], 1);
		string_len++;
	}

	return (string_len);
}


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
				case 's':
					count = count + count_str(va_arg(valist, char *));
					count--; /* going to be added at the end of the loop */
					break;
				case 'i':
					x = va_arg(valist, int);
					write(1, &x, 1);
				default:
					return (-1);
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
