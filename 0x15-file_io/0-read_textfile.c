#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output.
 * @filename: file name
 * @letters: max letter to read
 * Return: actual number of letters it could read and print
 *	if error 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, r, w;
	char *buffer;

	if (!filename)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (free(buffer), 0);
	r = read(file, buffer, letters);
	if (r == -1)
		return (free(buffer), 0);
	buffer[letters] = '\0';
	w = write(STDOUT_FILENO, buffer, r);
	free(buffer);
	if (w == -1)
		return (0);
	close(file);
	return (w);

}

