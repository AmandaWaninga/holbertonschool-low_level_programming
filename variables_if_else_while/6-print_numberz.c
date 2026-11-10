#include <stdio.h>

/**
 * main - This program prints single digit numbers of base 10 from 0 followed
 * by a new line. Using Putchar
 * Return: - Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i<= 9; i++)
	{
		putchar(i + '0');
	}
putchar('\n');

return (0);
}
