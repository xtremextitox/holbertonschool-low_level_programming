#include <stdio.h>

/**
 * main - Printing the alphabet, coming back to change it
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
	putchar(c);
putchar('\n');
return (0);
}
