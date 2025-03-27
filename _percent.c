#include "main.h"

/**
 * _percent - write the character percent
 * @args: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned
 */

int _percent(va_list args)
{
	(void)args;

	_putchar('%');

	return (1);

}
