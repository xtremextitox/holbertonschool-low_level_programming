#include<stdio.h>
#include<unistd.h>
/**
 * main - Prints exactly a line followed by a line and standard error
 * Return: Always 1
 */
int main(void)
{
	write(2, "and that piece of art is useful\" -Dora Korpar, 2015-10-19\n", stdout);
	return (1);
}
