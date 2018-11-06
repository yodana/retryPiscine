#include <unistd.h>
#include <fcntl.h>

int main(int argc, char **argv)
{
	char *buf;
	int fd;

	buf = 0;
	if (argc == 1)
		write(1, "File name missing.", 18);
	else if (argc == 3)
		write(1, "Too many arguments", 18);
	else
	{
		fd = open(argv[1], O_RDONLY);
		while (read(fd, &buf, 1))
		{
			write(1, &buf, 1);
		}
		close(fd);
	}
	return (0);
}

