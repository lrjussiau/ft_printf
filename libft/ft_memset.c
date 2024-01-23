/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljussiau <ljussiau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:21:35 by ljussiau          #+#    #+#             */
/*   Updated: 2023/10/12 16:42:09 by ljussiau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memset(void *str, int c, unsigned int len)
{
	unsigned int	i;
	char			*ret_str;

	i = 0;
	ret_str = (char *)str;
	while (len > 0)
	{
		ret_str[i] = c;
		i++;
		len--;
	}
	return (ret_str);
}
/*
int main()
{
	char str[20];

   	strcpy(str,"coucou\n");
	printf("%s", str);

	ft_memset(str, 'a', 12);
	printf("%s", str);
}
*/