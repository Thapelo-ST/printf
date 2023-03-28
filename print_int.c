#include "main.h"

/**
 * _print_int - prints an integer
 * @n: the integer to print
 *
 * Return: number of characters printed
 */

int _print_int(int n)
{
	int i, digits = 1, chars_printed = 0;

	if (n < 0)
	{
		_putchar('-');
		chars_printed++;
		n *= -1;
	}

	for (i = n; i >= 10; i /= 10)
		digits *= 10;

	for (i = n; digits; i %= digits, digits /= 10)
	{
		_putchar(i / digits + '0');
		chars_printed++;
	}
	return (chars_printed);
}
