#include "main.h"

/**
 * _print_hex - prints an unsigned integer in hexadecimal form
 * @n: unsigned integer to be printed
 * @uppercase: 1 if letters should be uppercase, 0 otherwise
 *
 * Return: void
 */
void _prnt_hex(unsigned long int n, int uppercase)
{
	char *hex_digits;

	hex_digits = uppercase ? "0123456789ABCDEF" : "0123456789abcdef";
	if (n / 16)
		_prnt_hex(n / 16, uppercase);

	_putchar(hex_digits[n % 16]);
}
