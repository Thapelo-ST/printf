#include "main.h"

/**
 * _prnt_int_modifier - prints integer with length modifier
 * @length: length modifier character ('l' or 'h')
 * @n: integer to be printed
 *
 * Return: void
 */

void _prnt_int_mod(char length, int n)
{
  switch (length)
    {
    case 'l':
      _prnt_l((long)n);
      break;
    case 'h':
      _prnt_short_int((short)n);
      break;
    default:
      _print_int(n);
    }
}
