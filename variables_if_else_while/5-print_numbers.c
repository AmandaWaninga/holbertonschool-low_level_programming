#include <stdio.h>
/**
 *  main - this program prints out numbers using putchar
 *  Return: - Always 0 (Success)
 */
int main(void)
{
	int number;
	int i;

	for (i = 0; i < 10 && i > 0; i++)
	{
		number = i;
		printf("%d\n", number);
	}
return (0);
}
