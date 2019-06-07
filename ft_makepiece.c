/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_makepiece.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 05:38:29 by mcouto            #+#    #+#             */
/*   Updated: 2019/06/07 03:07:02 by mcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "libft/libft.h"

/*int ft_width(char *tetramino)
{
	while (tetramino)
	{
		if (*tetramino == '#' && *(tetramino + 1) != '#')
			width
	}
}*/

/*char *ft_clean_tetramino(int height, char *tetramino)
{
	
}*/

int ft_width(char *tetramino)
{
	int hashtag;
	int width;

	hashtag = 0;
	width = 0;
	while (*tetramino)
	{
		while (*tetramino != '\n' && *tetramino != '\0')//so it reads each line per time
		{
			if (*tetramino == '#')
				hashtag++;
			tetramino++;
		}
		if (width < hashtag)//put the max value inside width
			width = hashtag;
		hashtag = 0;
		tetramino++;
	}
	return (width);
}

int ft_height(char *tetramino)
{
	int height;
	int hashtag;

	hashtag = 0;
	height = 0;
	while (*tetramino)
	{
		while (*tetramino != '\n' && *tetramino != '\0')//so it reads each line per time
		{
			if (*tetramino == '#')
				hashtag++;
			tetramino++;
		}
		if (hashtag > 0)
			height++;
		hashtag = 0;
		tetramino++;
	}
	return (height);
}
	
/*if (*tetramino == '#')
		{

			*tetramino = '1';
		}
		if (*tetramino == '.')
		{
			*tetramino = '0';
		}
		tetramino++;
	}
}*/

/*int makepiece_main(char *tetramino)
{
//	char *position;
//	int width;
	int height;

//	width = 4;
	if(!(height = ft_height(tetramino)))
		return (0);
	return(height);
//	if (!(position = ft_clean_tetramino(tetramino))
//		return (0);

}*/

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
			printf("\n%s", tetramino);
			printf("height: %d\n", ft_height(tetramino));
			printf("width: %d\n_______\n", ft_width(tetramino));
			ft_strclr(tetramino);
			i++;
		}
	}
}
