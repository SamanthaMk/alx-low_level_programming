#include "main.h"
/**
 * get_endianness - Function checks endianness.
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
unsigned int gi = 1;
char *c = (char *) &gi;
return (*c);
}
