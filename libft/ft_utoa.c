/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljussiau <ljussiau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:10:26 by ljussiau          #+#    #+#             */
/*   Updated: 2023/10/18 12:31:02 by ljussiau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_nb(unsigned int n)
{
	int	len;

	len = 1;
	while (n > 9)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_utoa(unsigned int n)
{
	char	*str;
	int		len;

	len = len_nb(n);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (0);
	str[len] = '\0';
	while (n != 0)
	{
		str[len - 1] = (n % 10) + '0';
		len --;
		n /= 10;
	}
	return (str);
}
/*
int main ()
{
	unsigned int nb = -20;
	char *str = ft_utoa(nb);
	printf("%s\n", str);
}
*/