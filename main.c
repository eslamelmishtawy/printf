#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;

    	len = _printf("%c Let's try to printf a simple sentence.\n", 'H');
    	printf("%d", len);

	return (0);
}
