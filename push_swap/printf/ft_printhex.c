/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelkhir <nbelkhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 16:31:49 by nbelkhir          #+#    #+#             */
/*   Updated: 2024/06/08 16:32:31 by nbelkhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_lenex(unsigned int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void	ft_putex(unsigned int num, const char format)
{
	if (num >= 16)
	{
		ft_putex(num / 16, format);
		ft_putex(num % 16, format);
	}
	else
	{
		if (num <= 9)
			ft_putchar((num + '0'));
		else
		{
			if (format == 'X')
				ft_putchar((num - 10 + 'A'));
			if (format == 'x')
				ft_putchar((num - 10 + 'a'));
		}
	}
}

int	ft_print_hex(unsigned int num, const char format)
{
	if (num == 0)
		return (write(1, "0", 1));
	else
		ft_putex(num, format);
	return (ft_lenex(num));
}
