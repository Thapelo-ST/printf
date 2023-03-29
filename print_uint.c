#include "main.h"

/**
 * _prnt_uint - prints an unsigned integer
 * @n: unsigned integer to print
 *
 * Return: number of digits printed
 */

int _prnt_uint(unsigned int n)
{
  int cp;

  cp = 0;

  if (n / 10)
    {
      cp += _prnt_uint(n / 10);
    }

  _putchar((n % 10) + '0');
  cp++;

  return (cp);

}
