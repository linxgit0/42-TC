/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelkhir <nbelkhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 02:49:13 by nbelkhir          #+#    #+#             */
/*   Updated: 2024/05/10 02:50:58 by nbelkhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	couneterint(int nb)
{
	int	count;

	count = 1;
	if (nb < 0)
	{
		nb = -nb;
		count++;
	}
	while ((nb / 10) != 0)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		unitynumber;
	int		c;
	char	*rendu;

	unitynumber = couneterint(n);
	c = unitynumber;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	rendu = malloc((sizeof(char)) * (unitynumber + 1));
	if (!rendu)
		return (NULL);
	rendu[unitynumber] = '\0';
	if (n < 0)
	{
		n = -n;
		c = c - 1;
		rendu[0] = '-';
	}
	while (c)
	{
		rendu[unitynumber-- - 1] = (n % 10) + 48;
		n = n / 10;
		c--;
	}
	return (rendu);
}
