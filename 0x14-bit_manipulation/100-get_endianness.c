#include "main.h"

/**
 * get_endianness - Checks the endianness of the system
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
    unsigned int num = 1;
    unsigned char *ptr = (unsigned char *)&num;

    /* If the least significant byte is stored at the lowest memory address, it's little endian */
    return (*ptr == 1) ? 1 : 0;
}

