#include "main.h"

/**
 * create_file - Codes function creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 * Return: If the function fails - -1.
 *Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
int d, wp, ln = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (ln = 0; text_content[ln];)
ln++;
}
d = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
wp = write(d, text_content, ln);
if (d == -1 || wp == -1)
return (-1);
close(d);
return (1);
}
