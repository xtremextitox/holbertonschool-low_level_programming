#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Printing numbers and letter of base 16'
 * Return: Always 0 (Success)
 */
int main(void)
{
int c;
char d;
for (c = '0'; c <= '9'; c++)
putchar(c);
for (d = 'a'; d <= 'f'; d++)
putchar(d);
putchar('\n');
return (0);
}
