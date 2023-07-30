#include "main.h"
/**
 * append_text_to_file - appends text to the end of a file.
 * @filename: the name fo the file
 * @text_content: is null terminated string to add at the end of the file
 *
 * Description: It doesn't create the file if it doesn't exist.
 *              If the filename is NULL it return -1;
 *              If text_content is NULL,It doesn't add anything to the file
 *              Returns 1 if file exists and -1 if it doesn't  exitst
 *              or you don't have permission to write to the file.
 * Return: 1-success, -1-failure:
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, flgs, i;
	ssize_t swrt;
	size_t wrtcnt;
	int fail = -1;
	int succ = 1;

	flgs = O_APPEND | O_RDWR;
	wrtcnt = 0;
	if (filename == NULL)
		return (fail);
	fd = open(filename, flgs);
	if (fd == fail)
		return (fail);
	if (text_content == NULL)
		return (succ);
	for (i = 0; text_content[i] != '\0'; i++)
		wrtcnt++;
	swrt = write(fd, text_content, wrtcnt);
	if (swrt == fail)
		return (fail);
	return (succ);
}
