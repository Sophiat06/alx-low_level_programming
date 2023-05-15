#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
/**
 * check_number - check strings for digit
 * @str: array string
 *
 * Return: Always 0
 */
int check_number(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}
/**
 * main - print the name of the program
 * @argc: count arguments in a program
 * @argv: array of arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int count;
	int str_to_int;

	int sum = 0;

	count = 1;

	while (count < argc)
	{
		if (check_number(argv[count]))
		{
			str_to_int = _atoi(argv[count]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
