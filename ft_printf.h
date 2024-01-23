/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljussiau <ljussiau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:26:41 by ljussiau          #+#    #+#             */
/*   Updated: 2023/10/20 08:56:30 by ljussiau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

int		ft_printf(const char *str, ...);
int		print_s(char *str);
int		print_c(char c);
int		print_d(int nb);
int		print_i(int nb);
int		print_u(unsigned int nb);
int		print_x(unsigned int nb, char c);
int		len_hex(unsigned int n);
void	write_hex(unsigned int n, char c);
int		print_p(unsigned long nb);
int		len_ptr(unsigned long n);
void	write_ptr(unsigned long n);

#endif