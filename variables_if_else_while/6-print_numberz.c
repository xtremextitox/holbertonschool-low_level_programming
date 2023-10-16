#include <stdio.h>
/**
 * main - Printing numbers with char
 * Return: Always 0 (Success)
 */
int main(void)
{
	putchar(48);
	for (int c = 1; c < 10; c++)
	{
		putchar(44);
		putchar(c + 48);
	}
	putchar(10);
	return (0);
}
