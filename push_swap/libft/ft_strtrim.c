/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelkhir <nbelkhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 03:07:55 by nbelkhir          #+#    #+#             */
/*   Updated: 2024/05/10 04:47:59 by nbelkhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*rendu;
	size_t	end;
	size_t	start;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup((char *)s1));
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	rendu = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!rendu)
		return (NULL);
	ft_strlcpy(rendu, s1 + start, end - start + 1);
	return (rendu);
}
