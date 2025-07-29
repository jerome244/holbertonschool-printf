#include "main.h"

/**
 * _binary - Converts an unsigned int to binary and prints it
 * @num: The number to convert
 *
 * Return: The number of characters printed
 */

int _binary(unsigned int num)
{
    int count = 0;
    int i;
    char buffer[32];  /* Max 32 bits for an unsigned int */

    if (num == 0)
    {
        _putchar('0');
        return (1);
    }

    for (i = 0; num > 0; i++)
    {
        buffer[i] = (num % 2) + '0';
        num /= 2;
    }

    while (i-- > 0)
    {
        _putchar(buffer[i]);
        count++;
    }

    return (count);
}
