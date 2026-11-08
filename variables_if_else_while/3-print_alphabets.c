#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * main - This program writes the Alphabet in lower case and then on upper case
 * Return: - Always 0 (Success)
 */

int main(void)
{
	char letters[27];
	int i;

	strcpy(letters, "abcdefghijklmnopqrstuvwxyz");
	for (i = 0; letters[i] != '\0'; i++)
	{
	putchar("%s", letters);
	}
	letters[i] = toupper(letters[i]);
	for (i = 0; letters[i] != '\0'; i++)
	{
	putchar(letters[i]);
	}
putchar('\n');
return (0);
}
