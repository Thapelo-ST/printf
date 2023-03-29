#include "main.h"

/**
 * _prnt_oct - prints an unsigned integer in octal form
 * @n: unsigned integer to print
 *
 * Return: number of digits printed
 */
int _prnt_oct(unsigned int n)
{
  int cp;

  cp = 0;

  if (n / 8)
    cp += _prnt_oct(n / 8);

  _putchar((n % 8) + '0');
  cp++;

  return cp;

}
