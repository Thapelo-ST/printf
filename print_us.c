#include "main.h"

/**
 * _prnt_us - prints an unsigned short integer
 * @n: unsigned short integer to be printed
 *
 * Return: void
 */
void _prnt_us(unsigned short n)
{
	if (n / 10)
		_prnt_us(n / 10);

	_putchar((n % 10) + '0');

}
