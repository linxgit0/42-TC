/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelkhir <nbelkhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 02:45:43 by nbelkhir          #+#    #+#             */
/*   Updated: 2024/05/13 21:30:22 by nbelkhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*src;

	if ((count >= 65535 && size >= 65535) || count * size >= 65535)
		return (NULL);
	src = (void *)malloc(count * size);
	if (!src)
		return (NULL);
	ft_bzero(src, count * size);
	return (src);
}
