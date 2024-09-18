#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

int	ft_valid_args(int argc)
{

	if (argc < 2)
	{
		write(1, "File name missing.\n", 20);
		return (0);
	}
	else if (argc > 2)
	{
		write(1, "Too many arguments.\n", 21);
		return (0);
	}
	return (1);
}

int	ft_open_file(char *filename)
{
	int	file;

	file = open(filename, O_RDONLY);
	if (!file)
	{
		write(1, "Cannot read file.\n", 19);
		return (0);
	}
	return (file);
}

int	ft_read_file(int fd, char *buf, int count)
{
	int	num_of_bytes;

	num_of_bytes = read(fd, buf, count);	
	if (num_of_bytes == -1)
	{
		write(1, "Cannnot read file.\n", 19);
		return (0);
	}
	while (*buf != 0)
		write(1, buf++, 1);
	return (num_of_bytes);
}

int	main(int argc, char **argv)
{	
	char	buffer[1024];
	int	num_bytes_read;
	int	file;

	if (ft_valid_args(argc) == 0)
		return (0);
	file = ft_open_file(argv[1]);
	if (!file)
		return (0);
	num_bytes_read = ft_read_file(file, buffer, 1024);
	if (!num_bytes_read)
		return (0);
	printf("Num of bytes read: %d\n", num_bytes_read);
	return (0);
}
