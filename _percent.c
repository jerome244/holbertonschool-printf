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
	(void)args; /* cancel the usage of args in the function --> */
	/* for avoiding a compilation error */

	_putchar('%');

	return (1);

}
