/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelkhir <nbelkhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 20:29:49 by nbelkhir          #+#    #+#             */
/*   Updated: 2024/08/12 17:02:20 by nbelkhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lt;

	lt = (t_list *)malloc(sizeof(*lt));
	if (!lt)
		return (NULL);
	lt->content = content;
	lt->next = NULL;
	return (lt);
}
