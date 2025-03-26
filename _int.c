#include "main.h"

/**
 * _int - print an integer.
 * @args: arguments of variadic function.
 *
 * Return: the sum of characters counted in the input string.
 */

int _int(va_list args)
{
	long int number = va_arg(args, int);
	int sum = 0;
	int multiplication = 1;
	long int division;

	if (number < 0)
	{
		sum += _putchar('-');
		number *= -1;
	}
	if (number < 10)
		return (sum += _putchar(num + '0'));
	division = number;
	while (division > 9)
	{
		multiplication *= 10;
		division /= 10;
	}
	while (multiplication >= 1)
	{
		sum += _putchar(((number / multiplication) % 10) + '0');
		multiplication /= 10;
	}
	return (sul);
}
