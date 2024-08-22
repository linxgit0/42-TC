/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelkhir <nbelkhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 04:48:27 by nbelkhir          #+#    #+#             */
/*   Updated: 2024/05/13 20:01:14 by nbelkhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	j;
	char	*str;
	size_t	lensource;

	j = 0;
	lensource = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start + len > lensource)
	{
		if (start < lensource)
			len = ft_strlen(s + start);
		else
			len = 0;
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (len--)
		str[j++] = s[start++];
	str[j] = 0;
	return (str);
}
