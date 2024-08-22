/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelkhir <nbelkhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 16:31:52 by nbelkhir          #+#    #+#             */
/*   Updated: 2024/06/08 16:31:53 by nbelkhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int	ft_print_ptr(unsigned long long ptr);
int	ft_print_hex(unsigned int num, const char format);
int	print_number(int n);
int	ft_putstr(char *s);
int	ft_putchar(char c);
int	ft_printf(const char *src, ...);
int	print_number_unsigned(unsigned int n);

#endif