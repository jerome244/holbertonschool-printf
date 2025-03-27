#include "main.h"

/**
 * _format - function types.
 * @specifier: character to specify a type of input string
 * @args: arguments
 * Return: number of character
 */
int _format(const char specifier, va_list args)
{
	types_t types[] = {
		{'c', _char},
		{'s', _string},
		{'d', _int},
		{'i', _int},
		{'%', _percent},
		{'\0', NULL}
	};
	int i = 0;

	while (types[i].specifier)
	{
		if (types[i].specifier == specifier)
			return (types[i].f(args));
		i++;
	}
	_putchar('%');
	_putchar(specifier);
	return (2);
}
