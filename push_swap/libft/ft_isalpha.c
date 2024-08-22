/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelkhir <nbelkhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 02:46:45 by nbelkhir          #+#    #+#             */
/*   Updated: 2024/05/10 02:47:14 by nbelkhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
// int main()
//{
// char *print;
// char c;
// printf("%d\n", ft_isalpha('Qadwxaxaxwadw'));
// printf("belle fonction en vraie : %d\n", isalpha('Qadaddwdadaw'));
//}