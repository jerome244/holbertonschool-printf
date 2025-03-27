#include "main.h"

/**
 * _format - the type of the function
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

	while (types[i].specifier) //while there is a character after the '%' char in the format inputted string
	{
		if (types[i].specifier == specifier) //in case if the characters following the % correspond to a character of the structure types
			return (types[i].f(args));
		i++;
	}
	_putchar('%');
	_putchar(specifier);
	return (2);
}
