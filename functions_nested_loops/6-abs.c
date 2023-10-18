#include "main.h"
/**
 * _abs - Function that computes the absolute of an interger.
 * @d: number
 * Return: Absolute value of number or zero
 */
int _abs(int c)
{
if (c < 0)
{
int d;
d = c * -1;
return (d);
}
return (c);
}
