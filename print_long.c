#include "main.h"

/**
 * _print_long - prints a long integer
 * @n: long integer to be printed
 *
 * Return: void
 */
void _prnt_l(long n)
{
	unsigned long m;

	if (n < 0)
	{
		_putchar('-');
		m = -n;
	}
	else
		m = n;

	if (m / 10)
		_prnt_l(m / 10);

	_putchar((m % 10) + '0');
}
