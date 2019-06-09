int main (int argc, char **argv)
{
	char *tetramino;
	int fd;
	int buff_size = 21;
	int i = 1;

	if (argc != 2)
		printf("USAGE");
	else
	{
		fd = open(argv[1], O_RDONLY);
		tetramino = ft_strnew(buff_size);
		while (read(fd, tetramino, buff_size) > 0)
		{
			printf("height: %d\n", makepiece_main(tetramino));
			ft_strclr(tetramino);
			i++;
		}
	}
}
