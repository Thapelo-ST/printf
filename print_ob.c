#include "main.h"

/**
 * _print_octal - prints an unsigned integer in octal form
 * @n: unsigned integer to be printed
 *
 * Return: void
 */
void _print_octal(unsigned int n)
{
  char octal_buffer[100];
  int i = 0;

  while (n != 0)
    {
      octal_buffer[i] = (n % 8) + '0';
      n /= 8;
      i++;
    }
  if (i == 0)
    {
      _putchar('0');
      return;
    }
  while (i > 0)
    {
      _putchar(octal_buffer[i - 1]);
      i--;
    }
}
