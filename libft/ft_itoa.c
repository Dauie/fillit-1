/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/05 06:46:36 by mcouto            #+#    #+#             */
/*   Updated: 2019/05/14 21:33:31 by mcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char		*final;
	long long	size;

	size = ft_howmanydig(n);
	if (!(final = ft_strnew(size)))
		return (NULL);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		n = n * (-1);
		final[0] = '-';
	}
	if (n == 0)
		return (ft_strdup("0"));
	while (n != 0)
	{
		final[size - 1] = (n % 10) + '0';
		n = n / 10;
		size--;
	}
	return (final);
}
