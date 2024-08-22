/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelkhir <nbelkhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 02:42:19 by nbelkhir          #+#    #+#             */
/*   Updated: 2024/05/10 02:44:25 by nbelkhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *c)
{
	int	i;
	int	signe;
	int	nbr;

	i = 0;
	signe = 1;
	nbr = 0;
	if (!c)
		return (0);
	while ((c[i] == 32) || (c[i] >= 9 && c[i] <= 13))
		i++;
	if ((c[i] == '-') || (c[i] == '+'))
	{
		if (c[i] == '-')
			signe = signe * -1;
		i++;
	}
	while (c[i] >= '0' && c[i] <= '9')
	{
		nbr = nbr * 10 + (c[i] - 48);
		i++;
	}
	return (nbr * signe);
}
