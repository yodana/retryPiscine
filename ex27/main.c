#include <unistd.h>

int main(int argc, char **argv)
{
	char *buf;

	buf = 0;
	if (argc == 1)
		write(1, "File name missing.", 18);
	else if (argc == 3)
		write(1, "Too many arguments", 18);
	else 
	{
		while(read(argv[1],buf,1))

