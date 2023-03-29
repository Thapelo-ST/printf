#include "main.h"

/**
 * _print_hex - prints an unsigned integer in hexadecimal form
 * @n: unsigned integer to be printed
 * @is_upper: flag to indicate if letters should be printed in upper case
 *
 * Return: void
 */

void _prnt_uhex(unsigned int n, int is_upper)
{
  char *hex_chars_lower = "0123456789abcdef";
  char *hex_chars_upper = "0123456789ABCDEF";
  char *hex_chars = is_upper ? hex_chars_upper : hex_chars_lower;
  char hex_buffer[100];
  int i = 0;

  while (n != 0)
    {
      hex_buffer[i] = hex_chars[n % 16];
      n = n / 16;
      i++;
    }
  if (i == 0)
    {
      _putchar('0');
      return;
    }
  while (i > 0)
    {
      _putchar(hex_buffer[i - 1]);
      i--;
    }
}
