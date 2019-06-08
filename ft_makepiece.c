/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_makepiece.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 05:38:29 by mcouto            #+#    #+#             */
/*   Updated: 2019/06/08 03:22:10 by mcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "libft/libft.h"

int ft_is_special_case(char *tetramino)
{
	int special_case;

	special_case = 0;
	while (*tetramino)
	{
		if (*tetramino == '.' && *(tetramino + 5) == '#')
			special_case++; 
		if (*tetramino == '.' && *(tetramino - 5) == '#')
			special_case++;
		tetramino++;
	}
	if (special_case == 2)
		return (1);
	return (0);
}

/*char *ft_cut_width(char *tetramino, int width)
{

}*/
int ft_width(char *tetramino)
{
	char *only_special_case;
	int hashtag;
	int width;

	hashtag = 0;
	width = 0;
	only_special_case = tetramino;
	while (*tetramino)
	{
		while (*tetramino != '\n' && *tetramino != '\0')//so it reads each line per time
		{
			if (*tetramino == '#')
				hashtag++;
			tetramino++;
		}
		if (width == hashtag && width > 0)
			if (ft_is_special_case(only_special_case) == 1)
				return (3);
		if (width < hashtag)//put the max value inside width
			width = hashtag;
		hashtag = 0;
		tetramino++;
	}
	only_special_case = NULL;
	return (width);
}

char *ft_cut_height(char *tetramino, int height)
{
	char *cut_height;
	char *start_of_hashtags;

	cut_height = ft_strnew((5 * height)); // so it has the size of height * [(max_size of line) == 5] (counting the '\n')
	start_of_hashtags = ft_strchr(tetramino, '#');
	while (*start_of_hashtags != '\n')
	{
		start_of_hashtags--; //so i go back to the start of the line
	}
	cut_height = ft_strncpy(cut_height, (start_of_hashtags + 1) /*so it do not take the '\n' its actually pointing at*/, (5 * height));
	return (&(cut_height[0]));

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
	
/*int makepiece_main(char *tetramino)
{
	char *position;
	int width;
	int height;

	width = 4;
	if(!(height = ft_height(tetramino)))
		return (0);
	return(height);
	if (!(position = ft_clean_tetramino(tetramino))
		return (0);

}*/

int main (int argc, char **argv)
{
	char *tetramino;
	char *tmp;
	int fd;
	int buff_size = 21;
	int i = 1;
	int height;

	if (argc != 2)
		printf("USAGE");
	else
	{
		fd = open(argv[1], O_RDONLY);
		tetramino = ft_strnew(buff_size);
		while (read(fd, tetramino, buff_size) > 0)
		{
			printf("\n%s", tetramino);
			height = ft_height(tetramino);
			printf("height: %d\n", height);
			tmp = tetramino;
			tetramino = ft_cut_height(tetramino, height);
			printf("this is the tetramino after the cut:\n%s", tetramino);
			printf("width: %d\n_______\n", ft_width(tetramino));
			ft_strclr(tetramino);
			ft_strdel(&tmp);
			i++;
		}
	}
}
