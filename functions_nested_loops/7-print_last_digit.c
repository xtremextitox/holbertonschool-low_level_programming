include "main.h"
/**
 * print_last_digit - Function that prints the last digit of a number.
 * @c: Number value
 * Return: Value of the last digit of number
 */
int print_last_digit(int c)
{
int last;
last = n % 10;
if (last < 0)
{
last = last * -1;
}
_putchar(last + '0');
return (last);
}
