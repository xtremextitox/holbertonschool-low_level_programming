#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Positive or negative task to learn how to use if and else
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("The number %d ", n);
if (n > 0) {
	printf("is positive");
}
else if (n == 0) {
	printf("is zero");
}
else if (n < 0) {
	printf("is negative");
}
printf("\n");
return (0);
}
