#include "main.h"

/**
* read_textfile - function that reads text file and prints the letters
* @filename: the filename.
* @letters: the number of letters printed.
* Return: the number of letters printed or 0 if it fails
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int x;
	ssize_t sk, jb;
	char *buff;

	if (!filename)
	return (0);

	x = open(filename, O_RDONLY);

	if (x == -1)
	return (0);

	buff = malloc(sizeof(char) * (letters));
	if (!buff)
	return (0);

	sk = read(x, buff, letters);
	jb = write(STDOUT_FILENO, buff, sk);

	close(x);
	free(buff);
	return (jb);
}
