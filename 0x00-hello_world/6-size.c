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
	int intType;
	char charType;
	long int longintType;
	long long int longlongintType;
	float floattype;
	/* sizeoff evaluates the size of the file*/
	printf("size of char: %zu bytes\n", sizeof(charType));
	printf("size of int: %zu bytes\n", sizeof(intType));
	printf("size of long int: %zu bytes\n", sizeof(longintType));
	printf("size of long long int: %zu bytes\n", sizeof(longlongintType));
	printf("size of float: %zu bytes\n", sizeof(floattype));

	return (0);
}
