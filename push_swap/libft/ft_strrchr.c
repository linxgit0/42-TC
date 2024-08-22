/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelkhir <nbelkhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 03:07:19 by nbelkhir          #+#    #+#             */
/*   Updated: 2024/05/10 03:07:39 by nbelkhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int search)
{
	int		i;
	char	*str;

	str = (char *)string;
	i = ft_strlen(string);
	while (i >= 0)
	{
		if (str[i] == (char)search)
			return (str + i);
		i--;
	}
	return (NULL);
}
