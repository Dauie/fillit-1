/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 03:02:51 by mcouto            #+#    #+#             */
/*   Updated: 2019/06/07 11:06:16 by mcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

int check_struct(char *tetramino)
{
	while (*tetramino != '\0')
	{
		while (*tetramino == '.')
		{
			d++;
			tetramino++;
		}
		while (*tetramino == '#')
		{
			h++;
			tetramino++;
		}
		while (*tetramino == '\n')
		{
			n++;
			tetramino++;
		}
		if (*tetramino != '.' || *tetramino != '#' || *tetramino != '\n') 	
			return (0);
	}
	if (d == 12 && h == 4 && n >= 4)
		return (1);
}

int	check_file_main(char *tetramino)
{
	if (check_struct(tetramino) == 0)
		return (0);
//	if (check_shape(tetramino) == 0)
//		return (0);
	else
		return (1);
}
