#include <stdio.h>
/**
 * main - print all arguments it recieves
 * @argc: argument count
 * @argv: argument vector array of all aruments passed
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
