#include "main.h"

/**
 * read_textfile - read a text file and print it to the stdout.
 * @filename: file name to read.
 * @letters: is the number of letters it should read and print.
 *
 * Description: return the actual number of letter it could read and print.
 *              if the file cannot be open of read, return 0.
 *              if the filename is null return 0.
 *              if the write fails or deosn't wrtie the expected
 *              amount return 0.
 * Return: 0-file can't open, file is null, write fails.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rcnt, wcnt;
	int fd;
	char *buff;
	int fail = -1;

	if (filename == NULL)
		return (fail + 1);
	buff = (char *)malloc((letters + 1) * sizeof(char));
	if (buff == NULL)
		return (fail + 1);
	fd = open(filename, O_RDONLY);
	if (fd == fail)
		return (fail + 1);
	rcnt = read(fd, buff, letters);
	if (rcnt == fail)
		return (fail + 1);
	wcnt = write(1, buff, rcnt);
	if (wcnt == fail)
		return (fail + 1);
	fsync(fd);
	close(fd);
	return (wcnt);
}
