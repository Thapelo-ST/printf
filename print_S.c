#include "main.h"

/**
 * _print_str - prints a string and handles non-printable characters
 * @s: string to print
 *
 * Return: void
 */
void _prnt_S(char *s)
{
  int i;

  for (i = 0; s[i]; i++)
    {
      if (s[i] >= 32 && s[i] < 127)
        {
          _putchar(s[i]);

        }
      else
        {
          _putchar('\\');
          _putchar('x');
          if (s[i] < 16)
            _putchar('0');
          _prnt_hex((unsigned int)s[i], 1);

        }
                    
    }
        
}
