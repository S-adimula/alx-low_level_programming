#include <stdio.h>
/**
 * main - the program prints its own name
 * @argc: arguement counts
 * @argv: arguement vectors
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	argc--; /*added to pass checks*/
	printf("%s\n", argv[0]);
	return (0);
}
