#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes a charcter to stdout
 * @c: the char to write
 *
 * Return: 1 on success, -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
