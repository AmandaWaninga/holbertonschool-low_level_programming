#include <stdio.h>
#include <string.h>

/**
 * main - this prints out the letters of the alphabet in lowercase
 * Return: - Always 0 (Success)
 */

int main(void)
{
	char letters[27];

	strcpy(letters, "abcdefghijklmnopqrstuvwxyz");

	int i;

	for (i = 0; letters[i] != '\0'; i++)
	{
		putchar(letters[i]);

	}

putchar('\n');
return (0);
}
