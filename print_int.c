#include "main.h"

/**
 * print_int - to count and print string
 * @num: string to be counted
 * Return: return the number of char in string.
 */
void print_int(unsigned int num)
{
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	if (num > 9)
		print_int(num / 10);
	_putchar('0' + (num % 10));
}
