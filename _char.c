#include "main.h"

/**
 * _char - write the character
 * @args: The character to print
 *
 * Return: On success 1.
 * On error -1 is returned
 */

int _char(va_list args)
{
	char c = va_arg(args, int); /* variable c will get the member of list arg */

	return (_putchar(c));
}
