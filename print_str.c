#include "main.h"

/**
 * _print_str - prints a string
 * @s: the string to print
 *
 * Return: number of characters printed
 */

int _print_str(char *s)
{
	int i, chars_printed;

	chars_printed = 0;
	if (!s)
		s = "(null)";
	for (i = 0; s[i]; i++)
	{
		_putchar(s[i]);
		chars_printed++;
	}
	return (chars_printed);
}
