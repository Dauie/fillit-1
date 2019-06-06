/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_makepiece.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 05:38:29 by mcouto            #+#    #+#             */
/*   Updated: 2019/06/06 10:51:26 by mcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*int ft_width(char *tetramino)
{
	while (tetramino)
	{
		if (*tetramino == '#' && *(tetramino + 1) != '#')
			width
	}
}*/

char *ft_clean_tetramino(int height, char *tetramino)
{

}

int ft_height(char *tetramino)
{
	int height;

	height = 0;
	while (tetramino)
	{
		while (*tetramino != '\n')
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

int makepiece_main(char *tetramino)
{
	char *position;
	int width;
	int height;

	width = 4;
	if(!(height = ft_height))
		return (0);
	if (!(position = ft_clean_tetramino(tetramino))
		return (0);

}
