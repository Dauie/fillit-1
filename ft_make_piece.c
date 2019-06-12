/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_piece.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 22:40:55 by mcouto            #+#    #+#             */
/*   Updated: 2019/06/11 17:06:32 by mcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list *make_list(t_piece tetramino)
{
	
}

t_piece *make_struct(int width, int height, int letter, char *tetramino)
{
		t_piece *piece;

 		piece = ft_memalloc(sizeof(t_piece));
 		piece->width = width;
 		piece->height = height;
 		piece->tetri_letter = letter;
		piece->next = NULL;

		return (piece);
}

int make_piece_main (int width, int height, int letter, char *tetramino)
{
	if (letter == 'A')
	{
		
	}
}


