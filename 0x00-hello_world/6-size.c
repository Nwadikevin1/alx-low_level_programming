#include<stdio.h>
/**
 * main - data entry
 *
 * Descrition: prints the various types of computer.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	printf("size of char: %zu byte(s)\n", sizeof(char));
	printf("size of int: %zu byte(s)\n", sizeof(int));
	printf("size of long int: %zu byte(s)\n", sizeof(long int));
	printf("size of long long int: %zu byte(s)\n", sizeof(long long int));
	printf("size of float: %zu byte(s)\n", sizeof(float));

	return (0);
}
