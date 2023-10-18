#include "main.h"
/**
 * _islower - Function that checks for lowercase character
 * c: for check character purposes
 * Return: 1 for lowercase character or 0 for everything
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
