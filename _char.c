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
	char c = va_arg(args, int); //the c variable will receive the member of the arg list

	return (_putchar(c));
}
