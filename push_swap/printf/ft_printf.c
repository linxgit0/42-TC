/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelkhir <nbelkhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 16:29:46 by nbelkhir          #+#    #+#             */
/*   Updated: 2024/06/08 16:32:17 by nbelkhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	secondloop(va_list *args, const char src)
{
	int	len;

	len = 0;
	if (src == 'c')
		len += ft_putchar(va_arg(*args, int));
	else if (src == 's')
		len += ft_putstr(va_arg(*args, char *));
	else if (src == 'p')
		len += ft_print_ptr(va_arg(*args, unsigned long long int));
	else if (src == 'd' || src == 'i')
		len += print_number(va_arg(*args, int));
	else if (src == 'u')
		len += print_number_unsigned(va_arg(*args, unsigned long int));
	else if (src == 'x')
		len += ft_print_hex(va_arg(*args, unsigned int), src);
	else if (src == 'X')
		len += ft_print_hex(va_arg(*args, unsigned int), src);
	else if (src == '%')
		len += write(1, "%", 1);
	return (len);
}

int	ft_printf(const char *src, ...)
{
	va_list	chat;
	int		i;
	int		len;

	len = 0;
	i = 0;
	va_start(chat, src);
	while (src[i])
	{
		if (src[i] == '%')
		{
			len += secondloop(&chat, src[i + 1]);
			i++;
		}
		else
			len += write(1, &(src[i]), 1);
		i++;
	}
	va_end(chat);
	return (len);
}
