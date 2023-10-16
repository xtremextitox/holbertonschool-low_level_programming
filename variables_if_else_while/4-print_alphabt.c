#include <stdio.h>
/**
 * main - Printing the alphabet in lower case while not printing q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	{
		if (c = 'e' && c != 'q')
		putchar(c);
	}
		putchar('\n');
		return (0);
}
