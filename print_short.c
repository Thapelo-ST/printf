#include "main.h"

/**
 * _prnt_short_int - prints a short signed integer
 * @n: short signed integer to be printed
 *
 * Return: void
 */
void _prnt_short_int(short int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	_prnt_uint(n);
}
