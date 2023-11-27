#include "main.h"

/**
* create_file - function which creates a file
* @filename: the filename.
* @text_content: the content of the file.
* Return: 1 if success or -1 if unsuccessful
*/

int create_file(const char *filename, char *text_content)
{
	int m;
	int nlet;
	int w;

	if (!filename)
	return (-1);

	m = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (m == -1)
	return (-1);

	if (!text_content)
	text_content = "";

	for (nlet = 0; text_content[nlet]; nlet++)
		;
	w = write(m, text_content, nlet);
	if (w == -1)
	return (-1);
	close(m);
	return (1);
}
