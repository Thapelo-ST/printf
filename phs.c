#include "main.h"

/**
 * _print_hex_short - prints a short int in hexadecimal form
 * @n: short int to be printed
 * @uppercase: flag to print in uppercase or not
 *
 * Return: void
 */
void _print_hex_short(unsigned short int n, int uppercase)
{
  char *hex_digits = (uppercase) ? "0123456789ABCDEF" : "0123456789abcdef";
  char hex_buffer[20] = {0};
  int i = 0;

  if (n == 0)
    {
      _putchar('0');
      return;
    }

  while (n != 0)
    {
      hex_buffer[i] = hex_digits[n % 16];
      n /= 16;
      i++;
    }
  for (i = i - 1; i >= 0; i--)
    _putchar(hex_buffer[i]);
}
