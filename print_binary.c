#include "main.h"

/**
 * _print_binary - prints an unsigned integer in binary form
 * @n: unsigned interger to be printed
 *
 * Return: void
 */

void _prnt_b(unsigned int n)
{
  if (n / 2)
    {
      _prnt_b(n / 2);
    }

  _putchar((n % 2) + '0');
}
