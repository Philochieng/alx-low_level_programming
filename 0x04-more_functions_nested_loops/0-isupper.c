#include "main.h"

/**
 * _isupper - checks for uppercase letters
 * @c: character to check
 * Return: 1 otherwise 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
