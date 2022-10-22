#include <stdio.h>
#include <ctype.h>
/**
 * C program to check whether a character is uppercase or lowercase
 * return: 0
 */
int main(void)
{
	char c;

	/* Input character from user */
	printf("Enter any character: ");
	scanf("%c", &c);

	if (isupper(c))
	{
		printf("%c: 1", c);
	}
	else
	{
		printf("%c: 0", c);
	}
	
	return (0);
}
