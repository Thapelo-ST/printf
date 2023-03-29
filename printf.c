#include "main.h"
#include <stdarg.h>

/**
 * _printf - produces output according to a format
 * @format: character string containing format specifiers
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i, chars_printed;
	char len = '0';

	chars_printed = 0;
	va_start(args, format);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
			case 'c':
				_putchar(va_arg(args, int));
				chars_printed++;
				break;
			case 's':
				chars_printed += _print_str(va_arg(args, char *));
				break;
			case '%':
				_putchar('%');
				chars_printed++;
				break;
			case 'd':
			case 'i':
				{
					if (len == 'l')
						_prnt_l(va_arg(args, long));
					else if (len == 'h')
						_prnt_short_int(va_arg(args, int));
					else
						_print_int(va_arg(args, int));
					chars_printed ++;
					break;
				}
			case 'b':
				_prnt_b(va_arg(args, unsigned int));
				chars_printed++;
				break;
			case 'u':
				{
					if (len == 'l')
						    _prnt_ul(va_arg(args, unsigned long));
					else if (len == 'h')
						    _prnt_us(va_arg(args, unsigned int));
					else
						_prnt_uint(va_arg(args, unsigned int));
					chars_printed++;
					break;
				}
			case 'o':
				{
					if (len == 'l')
						    _print_octal_long(va_arg(args, unsigned long));
					else if (len == 'h')
						    _print_octal_short(va_arg(args, unsigned int));
					else
						_prnt_oct(va_arg(args, unsigned int));
					  chars_printed++;
					  break;
				}
			case 'x':
				if (len == 'l')
					    _print_hex_long(va_arg(args, unsigned long), 0);
				else if (len == 'h')
					    _print_hex_short(va_arg(args, unsigned int), 0);
				else
					    _prnt_hex((unsigned long int) va_arg(args, void *), 1);
				chars_printed++;
				break;
			case 'X':
				 if (len == 'l')
					     _print_hex_long(va_arg(args, unsigned long), 1);
				 else if (len == 'h')
					     _print_hex_short(va_arg(args, unsigned int), 1);
				 else
					     _prnt_hex((unsigned long int) va_arg(args, void *), 1);
				chars_printed++;
				break;
			case 'S':
				_prnt_S(va_arg(args, char*));
				chars_printed++;
				break;
			case 'p':
				_puts("0x");
				_prnt_hex((unsigned long int) va_arg(args, void *), 1);
				chars_printed += 2;
				break;



			default:
				_putchar('%');
				_putchar(format[i]);
				chars_printed += 2;
				break;
			}
		}
		else
		{
			_putchar(format[i]);
			chars_printed++;
		}
	}
	va_end(args);
	return (chars_printed);
}
