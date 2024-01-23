/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljussiau <ljussiau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 09:57:58 by ljussiau          #+#    #+#             */
/*   Updated: 2023/10/19 11:34:40 by ljussiau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	write_ptr(unsigned long n)
{
	if (n >= 16)
	{
		write_ptr(n / 16);
		write_ptr(n % 16);
	}
	else
	{
		if (n <= 9)
			print_c(n + '0');
		else
		{
			print_c((n - 10) + 'a');
		}
	}
}

int	len_ptr(unsigned long n)
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

int	print_p(unsigned long nb)
{
	int	i;

	i = 0;
	if (nb == 0)
	{
		i += print_s("0x0");
		return (i);
	}
	i += print_s("0x");
	write_ptr(nb);
	i += len_ptr(nb);
	return (i);
}
