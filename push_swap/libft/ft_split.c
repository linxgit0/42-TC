/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelkhir <nbelkhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 02:58:20 by nbelkhir          #+#    #+#             */
/*   Updated: 2024/05/10 02:58:21 by nbelkhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_lenght(const char *src, char c)
{
	int	count;
	int	flag;

	count = 0;
	flag = 0;
	while (*src)
	{
		if (*src != c && flag == 0)
		{
			count++;
			flag = 1;
		}
		else if (*src == c)
		{
			flag = 0;
		}
		src++;
	}
	return (count);
}

static char	*ft_substring(const char *src, int start, int finish)
{
	int		i;
	char	*word;

	i = 0;
	word = malloc(sizeof(char) * (finish - start + 1));
	while (start < finish)
		word[i++] = src[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	a;
	char	**tab;
	size_t	i;
	int		index;

	tab = malloc((ft_lenght(s, c) + 1) * sizeof(char *));
	if (!s || !tab)
		return (0);
	i = 0;
	a = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c && 0 <= index) || (i == ft_strlen(s) && 0 <= index))
		{
			tab[a++] = ft_substring(s, index, i);
			index = -1;
		}
		i++;
	}
	tab[a] = 0;
	return (tab);
}
