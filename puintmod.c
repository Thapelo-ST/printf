#include "main.h"

/**
 * _prnt_uint_mod - prints unsigned integer with length modifier
 * * @length: length modifier character ('l' or 'h')
 * * @n: unsigned integer to be printed
 * *
 * * Return: void
 * */
void _prnt_uint_mod(char length, unsigned int n)
{
  switch (length)
    {
    case 'l':
      _prnt_ul((unsigned long)n);
      break;
    case 'h':
      _prnt_us((unsigned short)n);
      break;
    default:
      _prnt_uint(n);

    }
      
}
