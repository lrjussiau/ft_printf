/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljussiau <ljussiau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:21:35 by ljussiau          #+#    #+#             */
/*   Updated: 2023/10/11 11:35:01 by ljussiau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_bzero(void *str, unsigned int len)
{
	char	*ret_str;

	ret_str = str;
	while (len > 0)
	{
		*ret_str = '\0';
		ret_str ++;
		len --;
	}
	return (ret_str);
}
/*
int main()
{
	char str[50];

   	strcpy(str,"This is string.h library function\n");
	printf("%s", str);

	ft_bzero(str, 6);
	printf("%s", str);
}
*/