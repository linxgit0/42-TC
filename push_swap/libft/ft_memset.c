/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelkhir <nbelkhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 02:55:07 by nbelkhir          #+#    #+#             */
/*   Updated: 2024/05/10 02:55:08 by nbelkhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t count)
{
	char	*chat;

	chat = dest;
	while (count > 0)
	{
		*chat++ = c;
		count--;
	}
	return (dest);
}

// int main(void)
//{
// char chocolat[20] = "dddddddd";

// ft_memset(chocolat, 'a', 12);
// printf("%s\n", chocolat);
// memset(chocolat, 'a', 11);
// printf("vraie fonction : %s\n", chocolat);
// return (0);
//}