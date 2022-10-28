#include "main.h"

/**
 * _strlen - returns string length
 * @s: the string
 * Return the length
 */

int _strlen(char *s)
{
	int counter = 0;
	
	while (*s != 0)
	{
		counter++;
	}
	return (counter);
}
