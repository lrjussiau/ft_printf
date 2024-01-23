/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljussiau <ljussiau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:58:35 by ljussiau          #+#    #+#             */
/*   Updated: 2023/10/19 09:40:01 by ljussiau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_d(int nb)
{
	int		i;
	char	*str;

	str = ft_itoa(nb);
	i = print_s(str);
	free(str);
	return (i);
}

int	print_i(int nb)
{
	int		i;
	char	*str;

	str = ft_itoa(nb);
	i = print_s(str);
	free(str);
	return (i);
}

int	print_u(unsigned int nb)
{
	int		i;
	char	*str;

	if (nb == 0)
		i = print_d(0);
	else
	{
		str = ft_utoa(nb);
		i = print_s(str);
		free(str);
	}
	return (i);
}
