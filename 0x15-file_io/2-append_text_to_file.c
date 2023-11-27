#include "main.h"

/**
* append_text_to_file - function that appends text at the end of file
* @filename: the filename.
* @text_content: the content added
* Return: 1 if the file exists or -1 if not
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int m;
	int nlet;
	int w;

	if (!filename)
	return (-1);

	m = open(filename, O_WRONLY | O_APPEND);

	if (m == -1)
	return (-1);

	if (text_content)
	{

	for (nlet = 0; text_content[nlet]; nlet++)
		;

	w = write(m, text_content, nlet);

	if (w == -1)
	return (-1);
	}
	close(m);
	return (1);
}
