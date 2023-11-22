#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: o on succcess or 1 on failure
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	else
	{
		printf("program not available.\n");
	}
	return (0);
}
