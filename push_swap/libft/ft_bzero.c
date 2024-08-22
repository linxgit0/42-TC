/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelkhir <nbelkhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 02:45:04 by nbelkhir          #+#    #+#             */
/*   Updated: 2024/05/10 02:45:05 by nbelkhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;

	ptr = s;
	while (n-- > 0)
	{
		*ptr++ = 0;
	}
}
/*int main()
{
	char str [20]= "chocolat";
	int n = 0;
	ft_bzero(str, 2);
	printf("fonction du roi : %s\n", str);
	bzero(str, 2);
	printf("fonction reel : %s\n", str);
	return(0);
}*/