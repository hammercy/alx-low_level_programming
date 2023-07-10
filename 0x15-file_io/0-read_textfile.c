#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - read a text file and print it to the stdout.
 * @filename: file name to read.
 * @letters: is the number of letters it should read and print.
 *
 * Return: 0-file can't open, file is null, write fails.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rcnt, wcnt;
	int fd;
	char *buff;

	buff = (char *)malloc(letters * sizeof(char));
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	rcnt = read(fd, buff, letters);
	if (rcnt < 0)
		return (0);
	wcnt = write(1, buff, rcnt);
	if (wcnt < rcnt)
		return (0);
	return (wcnt);
}
