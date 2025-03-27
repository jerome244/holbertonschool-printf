#include "main.h"

/**
 * _printf - print a string to the output
 * @format: an array of character
 *
 * Return: the sum of printed characters
 */

int _printf(const char *format, ...)
{
	int i = 0, sum = 0;
	va_list args;

	if (!format || (format[0] == '%' && !format[1])) //check if the inputted string is empty
		return (-1);

	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	va_start(args, format); //initialization of the variadic function

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%') //check if the inputted string contained the '%' character
		{
			if (format[i + 1] != '\0')
			{
				sum += _format(format[i + 1], args);
				i++;
			}
			else
				return (-1);
		}
		else
		{
			_putchar(format[i]);
			sum++;
		}
	}

	va_end(args);
	return (sum);

}
