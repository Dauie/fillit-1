/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isblancsp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 20:45:18 by mcouto            #+#    #+#             */
/*   Updated: 2019/05/14 21:48:35 by mcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isblancsp(char c)
{
	if (c == '\t' || c == '\v' || c == '\f' || c == '\r')
		return (1);
	if (c == '\n' || c == '\f' || c == ' ')
		return (1);
	else
		return (0);
}
