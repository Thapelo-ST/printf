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
				chars_printed += _print_int(va_arg(args, int));
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
