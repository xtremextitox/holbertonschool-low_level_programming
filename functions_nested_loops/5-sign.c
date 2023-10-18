#include "main.h"
/**
 * print_sign - function that prints the sign of a number
 * @n: checks number purposes
 * Return: 1 for greater than zero or 0 for zero or -1 for less than zero
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
