#include "main.h"

/**
 * _prnt_ul - prints an unsigned long integer
 * @n: unsigned long integer to be printed
 * Return: void
 */
void _prnt_ul(unsigned long n)
{
  if (n / 10)
    _prnt_ul(n / 10);

  _putchar((n % 10) + '0');

}
