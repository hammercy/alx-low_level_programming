#include "main.h"
#include <stdio.h>
/**
 * main - copies the content of a file to another file.
 * @ac: the number of arguments
 * @av: pointer to array of strings
 *
 * Description:-if the number of argument is not correct exits with 97 and
 *              print Usage: cp file_from file_to, followed by a newline,on
 *              the POSIX standard error.
 *             -if file_to already exists, truncate it.
 *             -if file_from doesn't exist or you can't read it exit wz 98
 *              and print Error: Can't read from file NAME_OF_THE_FILE,
 *              followed by newline on the standard error.
 *             -if you cannot create or if write to file_to fails, exit
 *              with 99 and print Error: Can't write to NAME_OF_THE_FILE
 *              followed by a newline on standard error.
 *             -NAME_OF_THE_FILE is the second argument passed to ur progr
 *             -if you can't close the a file descriptor, exit with code
 *              100 and print Error: Can't close fd FD_VALUE, followed by
 *              the newline on the standard error.
 *             -permission of the created file: rw-rw-r--. if the file
 *              already exit don't change permissions.
 *             -You must read 1024 bytes at a time from the file_from
 *              to make less system calls. Use a buffer
 *             -You are allowed to use dprintf
 * Return: 0 on success.
 */

int main(int ac, char **av)
{
	ssize_t rcnt = 1, wcnt = 0;
	int fd, rfd, wfd, crfd, cwfd, bsize = 1024, fail = -1;
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buff[1024];

	if (ac != 3)
		printuseErr();
	rfd = open(av[1], O_RDONLY);
	if (rfd == fail)
		printreadErr(av[1]);
	wfd = open(av[2], O_CREAT | O_RDWR | O_EXCL, mode);
	if (wfd == fail && errno == EEXIST)
		wfd = open(av[2], O_RDWR | O_TRUNC);
	if (wfd == fail)
		printwriteErr(av[2]);
	while (1)
	{
		rcnt = read(rfd, buff, bsize);
		if (rcnt == fail)
			printreadErr(av[1]);
		if (rcnt == 0)
			break;
		wcnt = write(wfd, buff, rcnt);
		if (wcnt == fail || wcnt < rcnt)
			printwriteErr(av[2]);
	}
	fsync(wfd);
	crfd = close(rfd);
	cwfd = close(wfd);
	if (crfd == fail || cwfd == fail)
	{
		if (crfd == fail && cwfd != fail)
			fd = rfd;
		else
			fd = wfd;
		printcloseErr(fd);
	}
	return (0);
}
/**
 * printuseErr - prints error to stderr caused by err in argument
 *
 */
void printuseErr(void)
{
	dprintf(2, "Usage: cp file_from file_to\n");
	exit(97);
}
/**
 * printreadErr - print errors to stderr caused by reading a file
 * @file: file to be read.
 *
 */
void printreadErr(char *file)
{
	dprintf(2, "Error: Can't read from file %s\n", file);
	exit(98);
}
/**
 * printwriteErr - print error to stderr caused by writing to a file
 * @file: file to be write to.
 *
 */
void printwriteErr(char *file)
{
	dprintf(2, "Error: Can't write to %s\n", file);
	exit(99);
}
/**
 * printcloseErr -  prints error to stderr cause by closing a file.
 * @fd: file descriptor of the file to be closed.
 *
 */

void printcloseErr(int fd)
{
	dprintf(2, "Error: Can't close fd %d\n", fd);
	exit(100);
}
