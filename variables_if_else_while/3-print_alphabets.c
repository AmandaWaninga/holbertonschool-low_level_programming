#include <stdio.h>

/**
 * main - This program writes the Alphabet in lower case and then on upper case
 * Return: - Always 0 (Success)
 */

int main(void)
{
	char letters[27];

	strcpy(letters, "abcdefghijklmnopqrstuvwxyz")
	printf("%s", letters);

	toupper(letters);

	printf("%s", letters);

return (0);
}
