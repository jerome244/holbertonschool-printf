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

	if (str == NULL) /* check if the string is empty */
		str = "(null)"; /* return the string for the exercice's error */

	while (str[i] != '\0')
	{
		_putchar(str[i]); /* print the string */
		i++;
	}

	return (i);

}
