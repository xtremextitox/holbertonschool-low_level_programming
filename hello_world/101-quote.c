#include<stdio.h>
#include<unlstd.h>
/**
 * main - Prints exactly a line followed by a line and standard error
 * Return: 1 (Success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" -Dora Korpar, 2015-10-19\n", stdout);
	return (1);
}
