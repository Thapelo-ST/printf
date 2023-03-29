#include "main.h"

/**
 * _print_octal_short - prints a short int in octal form
 * @n: short int to be printed
 *
 * Return: void
 */
void _print_octal_short(unsigned short int n)
{
	char octal_buffer[20] = {0};
	int i = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (n != 0)
	{
		octal_buffer[i] = (n % 8) + '0';
		n /= 8;
		i++;
	}

	for (i = i - 1; i >= 0; i--)
		_putchar(octal_buffer[i]);
}
