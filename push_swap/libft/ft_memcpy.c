/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelkhir <nbelkhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 21:29:30 by nbelkhir          #+#    #+#             */
/*   Updated: 2024/05/13 21:29:31 by nbelkhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*ptr1;
	const char	*ptr2;

	ptr1 = dest;
	ptr2 = src;
	i = 0;
	while (i++ < n)
	{
		*ptr1++ = *ptr2++;
	}
	return (dest);
}
/*int main()
{
	char chat [4];
	char *src = "pruno123";

	printf("%s\n", memcpy(chat, src, 6));
	printf("%s\n", ft_memcpy(chat, src, 6));
}*/