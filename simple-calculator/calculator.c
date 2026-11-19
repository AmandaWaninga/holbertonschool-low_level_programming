#include <stdio.h>

/**
 * main - Runs a simple interactive calculator
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int choice;
	double num1, num2, result;

	choice = -1;

	printf("Simple Calculator\n");

	while (choice != 0)
	{
		printf("1) Add\n");
		printf("2) Subtract\n");
		printf("3) Multiply\n");
		printf("4) Divide\n");
		printf("0) Quit\n");
		printf("Choice: ");

		if (scanf("%d", &choice) != 1)
			return (1);

		if (choice == 0)
		{
			printf("Bye!\n");
		}
		else if (choice >= 1 && choice <= 4)
		{
			printf("Enter first number: ");
			if (scanf("%lf", &num1) != 1)
				return (1);

			printf("Enter second number: ");
			if (scanf("%lf", &num2) != 1)
				return (1);

			if (choice == 1)
				result = num1 + num2;
			else if (choice == 2)
				result = num1 - num2;
			else if (choice == 3)
				result = num1 * num2;
			else if (num2 != 0)
				result = num1 / num2;
			else
			{
				printf("Error: Division by zero.\n");
				continue;
			}

			printf("Result: %.2f\n", result);
		}
		else
		{
			printf("Invalid choice. Try again.\n");
		}
	}

	return (0);
}
