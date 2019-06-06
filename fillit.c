/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 00:19:11 by mcouto            #+#    #+#             */
/*   Updated: 2019/06/06 00:39:30 by mcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "libft/libft.h"

int check_shape(char *tetramino)
{
	int i;
	int t; //number of possible conections between #

	i = 0;
	t = 0;
	while (tetramino[i] != '\0')
	{
		if (tetramino[i] == '#')
		{
			//i (+/-) 5 because 4char + 1'\n'
			if (tetramino[i + 1] == '#')
				t++;
			if (tetramino[i + 5] == '#')
				t++;
			if (tetramino[i - 1] == '#')
				t++;
			if (tetramino[i - 5] == '#')
				t++;
		}
		i++;
	}
	if (t == 5 || t == 8 || t == 6)
		return (1);
	return (0);
}

int check_column(char *tetramino)
{
	int i;

	i = 0;
	while (tetramino[i] != '\0')
	{
		if (i == 4) //is in the 4th column
		{
			if (tetramino[i + 1] == '\n' || tetramino[i + 1] == '\0')
				i = 1;
			else
				return (0);
		}
		i++;
	}
	return (1);
}

int check_struct(char *tetramino)
{
	int dots;
	int hashtags;
	int newlines;

	dots = 0;
	hashtags = 0;
	newlines = 0;
	while (*tetramino != '\0')
	{
		if (*tetramino != '.' && *tetramino != '#' && *tetramino != '\n')
			return (0);
		while (*tetramino == '.')
		{
			dots++;
			tetramino++;
		}
		while (*tetramino == '#')
		{
			hashtags++;
			tetramino++;
		}
		while (*tetramino == '\n')
		{
			newlines++;
			tetramino++;
		}
	}
	if (dots == 12 && hashtags== 4 && newlines >= 4)
		return (1);
	return (0);
}

int	check_file_main(char *tetramino)
{
	if (check_struct(tetramino) == 0)
		return (0);
	if (check_column(tetramino) == 0)
		return (0);
	if (check_shape(tetramino) == 0)
		return (0);
	else
		return (1);
}

int main (int argc, char **argv)
{
	char *tetramino;
	int fd;
	int buff_size = 21;

	if (argc != 2)
		printf("USAGE");
	else
	{
		fd = open(argv[1], O_RDONLY);
		tetramino = ft_strnew(buff_size);
		while (read(fd, tetramino, buff_size) > 0)
		{
			if (check_file_main(tetramino) == 1)
				printf("tudo certo\n");
			else 
				printf("nada certo\n");
			ft_strclr(tetramino);
		}
	}
}
