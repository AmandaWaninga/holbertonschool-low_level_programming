#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * main - This program writes the Alphabet in lower case and then on upper case
 * Return: - Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar('a' + i);
	}
for (i = 0; i < 26; i++)
	{
	putchar('A' + i);
	putchar('\n');
	}

return (0);
}
