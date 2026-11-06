#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - checks whether a integar is positive or negtive
 * and prints out the result
 *
 * Return: - Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
if (n < 0)
{
	printf("%d\n is negative", n)
}
else
{
	printf("%d\n is positive", n)
}
	return (0);
}
