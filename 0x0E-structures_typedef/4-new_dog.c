#include <stdlib.h>
#include "dog.h"
/**
  * _strlen - This code will return the length of string
  * @s: string that is to be evaluated
  * Return: String length
  */
int _strlen(char *s)
{
int dg;
dg = 0;
while (s[dg] != '\0')
{
dg++;
}
return (dg);
}
/**
  * *_strcpy - This program makes copies of string pointed to by src
  * Has a terminating null byte (\0)
  * The buffer pointed to by dest
  * @dest: pointer to the buffer that makes copy of string
  * @src: will be the copied string
  * Return: Pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
int q, g;
q = 0;
while (src[q] != '\0')
{
q++;
}
for (g = 0; g < q; g++)
{
dest[g] = src[g];
}
dest[g] = '\0';
return (dest);
}
/**
  * new_dog - new dog is created
  * @name: Is the name of the dog
  * @age: Is the age of the dog
  * @owner: owner of the pet dog
  * Return: The pointer to new dog (Success), NULL otherwise
  */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int d1, d2;
d1 = _strlen(name);
d2 = _strlen(owner);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
dog->name = malloc(sizeof(char) * (d1 + 1));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (d2 + 1));
if (dog->owner == NULL)
{
free(dog);
free(dog->name);
return (NULL);
}
_strcpy(dog->name, name);
_strcpy(dog->owner, owner);
dog->age = age;
return (dog);
}
