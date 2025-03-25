#include "main.h"

/**
 * _format - function types.
 * @type: conversion types.
 * @args: arguments.
 * Return: types.
 */
int _format(const char specifier, va_list args)
{
	types_t types[] = {
		{'c', _char},
		{'s', _string},
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
