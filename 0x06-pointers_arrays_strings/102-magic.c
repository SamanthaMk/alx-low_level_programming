#include <stdio.h>
/*
 * write your line of code
 * Remember: Do not remove anything from initial code, not even the comments
 * - you are not allowed to use a
 * - you are not allowed to modify p
 * - only one statement
 * - you are not allowed to code anything else than this line of code
 */
int main(void)
{
int n;
int a[5];
int *p;
a[2] = 1024;
p = &a[0];
*(p + 5) = 98;
printf("a[2] = %d\n", a[2]);
return (0);
}
