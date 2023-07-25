#include "main.h"

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
