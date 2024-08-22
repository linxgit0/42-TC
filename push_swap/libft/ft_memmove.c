/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelkhir <nbelkhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 02:54:25 by nbelkhir          #+#    #+#             */
/*   Updated: 2024/05/10 02:54:26 by nbelkhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*ptr1;
	const unsigned char	*ptr2;

	if (!dest && !src)
		return (NULL);
	ptr1 = dest;
	ptr2 = src;
	if (ptr1 < ptr2)
	{
		while (n--)
		{
			*ptr1++ = *ptr2++;
		}
	}
	else
	{
		while (n--)
		{
			ptr1[n] = ptr2[n];
		}
	}
	return (dest);
}

/*int main()
{
	char target[21] = "sourcestination";
	char * p = target + 2;
	char * source = target + 5;

  ft_memmove(p, source, 5);
  printf( "Before memmove, target is \"%s\"\n", target);
  //memmove( p, source, 5);
  //printf( "After memmove, target becomes \"%s\"\n", target);
}*/