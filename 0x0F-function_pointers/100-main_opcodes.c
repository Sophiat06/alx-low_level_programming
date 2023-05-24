#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints its own op codes
 * @argc: number of arguments
 * @argv: an array of arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int b, i;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arr = (char *)main;

	for (i = 0; i < b; i++)
	{
		if (i == b - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
	}
	return (0);

}


