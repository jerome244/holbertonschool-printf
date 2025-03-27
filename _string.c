#include "main.h"

/**
 * _string - writes the string to output
 * @args: The string to print
 *
 * Return: On success 1.
 * On error, -1 is returned
 */

int _string(va_list args)
{
	char *str = va_arg(args, char *);
	int i = 0;

	if (str == NULL)
		str = "(null)";

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	return (i);

}
