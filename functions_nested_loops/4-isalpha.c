#include "main.h"
/**
 * _isalpha - Function that cheks for alphabetic character
 * @c: checks character purposes
 * Return: 1 for alphabetic character or 0 for everthing else
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
