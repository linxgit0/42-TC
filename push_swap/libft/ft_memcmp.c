/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelkhir <nbelkhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 02:52:28 by nbelkhir          #+#    #+#             */
/*   Updated: 2024/05/10 02:53:46 by nbelkhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *pointer1, const void *pointer2, size_t size)
{
	size_t				i;
	const unsigned char	*pointer11;
	const unsigned char	*pointer22;

	pointer11 = (const unsigned char *)pointer1;
	pointer22 = (const unsigned char *)pointer2;
	i = 0;
	while (i < size)
	{
		if (pointer11[i] != pointer22[i])
			return (pointer11[i] - pointer22[i]);
		i++;
	}
	return (0);
}
