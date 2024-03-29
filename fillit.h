/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 05:21:02 by mcouto            #+#    #+#             */
/*   Updated: 2019/06/09 23:39:50 by mcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <unistd.h>
# include <fcntl.h>
# include "../libft/libft.h"

typedef struct		s_piece
{
	int width;
	int height;
	char			tetri_letter;
	struct s_piece	*next;
}					t_piece;


#endif
