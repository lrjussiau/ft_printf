/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljussiau <ljussiau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:11:09 by ljussiau          #+#    #+#             */
/*   Updated: 2023/10/19 11:22:17 by ljussiau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	write_hex(unsigned int n, char c)
{
	if (n >= 16)
	{
		write_hex(n / 16, c);
		write_hex(n % 16, c);
	}
	else
	{
		if (n <= 9)
			print_c(n + '0');
		else
		{
			if (c == 'x')
				print_c((n - 10) + 'a');
			else if (c == 'X')
				print_c((n - 10) + 'A');
		}
	}
}

int	len_hex(unsigned int n)
{
	int	len;

	len = 0;
	while (n > 0)
	{
		n /= 16;
		len ++;
	}
	return (len);
}

int	print_x(unsigned int nb, char c)
{
	int	i;

	if (nb == 0)
		i = print_d(0);
	else
	{
		write_hex(nb, c);
		i = len_hex(nb);
	}
	return (i);
}
