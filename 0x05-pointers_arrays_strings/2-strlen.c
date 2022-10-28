#include "main.h"

/**
 * _strlen - returns string length
 * @s: the string
 * Return the length
 */

int _strlen(char *s)
{
	int counter = 0;
	int s;

	while (*s != 0)
	{
		counter++;
	}
	s++;

	return (counter);
}
