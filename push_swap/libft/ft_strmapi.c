/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelkhir <nbelkhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 03:05:15 by nbelkhir          #+#    #+#             */
/*   Updated: 2024/05/10 03:05:16 by nbelkhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dest;
	int		i;

	if (!s || !f)
		return (NULL);
	i = 0;
	dest = ft_strdup((char *)s);
	while (dest[i])
	{
		dest[i] = f(i, dest[i]);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
