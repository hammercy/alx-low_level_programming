#include "main.h"

/**
 * create_file - creates a file if doesn't exist.
 * @filename: name of file to create
 * @text_content: a null terminated string to write to the file
 *
 * DESCRIPTION: The created file must have those permissions: rw-------.
 *              if the file exist, the permission is not changed.
 *              if the file aready exist, truncate it.
 *              if the file name is NULL returns -1.
 *              if the text_content is NULL create an empty file.
 * Return: 1-success: -1-failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int flgc, flgo;
	mode_t mode;
	size_t wcnt = 0, i = 0;
	ssize_t swrt = 0;
	int fail = -1, succ = 1;
	char *strempty = "";

	mode = S_IRUSR | S_IWUSR;
	flgc = O_RDWR | O_CREAT | O_EXCL;
	flgo = O_RDWR | O_TRUNC;
	if (filename == NULL)
		return (fail);
	if (text_content == NULL)
		text_content = strempty;
	fd = open(filename, flgc, mode);
	if (fd == fail)
	{
		if (errno == EEXIST)
		{
			fd = open(filename, flgo);
			if (fd == fail)
				return (fail);
		}
		else
		{
			return (fail);
		}
	}
	for (i = 0; text_content[i] != '\0'; i++)
		wcnt++;

	if (wcnt != 0)
		swrt = write(fd, text_content, wcnt);
	if (swrt == -1)
		return (fail);
	fsync(fd);
	if (close(fd) == fail)
		return (fail);
	return (succ);
}
