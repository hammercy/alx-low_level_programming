#include "main.h"

/**
 * create_file - creates a file if doesn't exist.
 * @filename: name of file to create
 * @text_content: a null terminated string to write to the file
 *
 * DESCRIPTION: The created file must have those permissions: rw-------.
 *              if the file exist, the permission is not changed.
 *              if the file name is NULL returns -1.
 *              if the text_content is NULL create an empty file.
 * Return: 1-success: -1-failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int flag;
	mode_t mode;
	int wcnt = 0, i = 0;
	char *strempty = "";

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = strempty;
	mode = S_IRUSR | S_IWUSR;
	flag = O_WRONLY | O_CREAT | O_TRUNC;
	fd = open(filename, flag, mode);
	if (fd == -1)
		return (-1);
	while (text_content[i] != '\0')
	{
		wcnt += write(fd, text_content, 1);
		i++;
	}
	if (wcnt == -1)
		return (-1);
	fsync(fd);
	if (close(fd) == -1)
		return (-1);
	return (1);
}
