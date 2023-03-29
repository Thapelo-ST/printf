#include "main.h"

/**
 * _print_int - prints a signed integer
 * @n: signed integer to be printed
 *
 * Return: void
 */

void _prnt_ints(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	_prnt_uint(n);
}
