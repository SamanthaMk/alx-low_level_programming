#include <stdlib.h>
#include "main.h"
/**
 * word_count- This is a helper function to count value of words in a string
 * @s: string to  be evaluate
 * Return: The value of the number of words
 */
int word_count(char *s)
{
int ag, cp, xw;
ag = 0;
xw = 0;
for (cp = 0; s[cp] != '\0'; cp++)
{
if (s[cp] == ' ')
ag = 0;
else if (ag == 0)
{
ag = 1;
xw++;
}
}
return (xw);
}
/**
 * **strtow - Codes function splits a string into words
 * @spl: strings to be splited
 * Return: Pointer to an array of strings or NULL (Error)
 */
char **strtow(char *spl)
{
char **indx, *map;
int ti, lkl = 0, wid = 0, word, cp = 0, in, out;
while (*(spl + wid))
wid++;
word = word_count(spl);
if (word == 0)
return (NULL);
indx = (char **) malloc(sizeof(char *) * (word + 1));
if (indx == NULL)
return (NULL);
for (ti = 0; ti <= wid; ti++)
{
if (spl[ti] == ' ' || spl[ti] == '\0')
{
if (cp)
{
out = ti;
map = (char *) malloc(sizeof(char) * (cp + 1));
if (map == NULL)
return (NULL);
while (in < out)
*map++ = spl[in++];
*map = '\0';
indx[lkl] = map - cp;
lkl++;
cp = 0;
}
}
else if (cp++ == 0)
in = ti;
}
indx[lkl] = NULL;
return (indx);
}
