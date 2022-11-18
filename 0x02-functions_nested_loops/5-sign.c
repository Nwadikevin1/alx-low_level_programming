#include"main.h"

/**
 * _isalpha - checks for alphabetical character
 * @c: ASCII value will be checked for each character.
 *Return: returns 1 if it is a letter and 0 if otherwise
 */
int _isalpha(int c)
{
	if (((c > 64) && (c < 91)) || ((c > 96) && (c < 123)))
		return (1);
	else
		return (0);
#include "main.h"

/**
* print_sign - prints the negative or positive sign of a number
* @n: the number to be checked
* Return: returns 1 if > 0, 0 if == 0, and -1 if < 0
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
