#include <stdio.h>
/**
 * main - ptints out all of the arguments passed to it
 * @argc: argument count
 * @argv: argument vectors
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	argv[0] = 0;
	return (0);
}
