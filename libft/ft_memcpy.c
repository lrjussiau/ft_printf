/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljussiau <ljussiau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:39:55 by ljussiau          #+#    #+#             */
/*   Updated: 2023/10/13 14:02:22 by ljussiau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, unsigned int len)
{
	char			*ret_dest;
	const char		*s;
	unsigned int	i;

	i = 0;
	s = src;
	ret_dest = dest;
	if (!s && !ret_dest)
		return (NULL);
	while (i < len)
	{
		ret_dest[i] = s[i];
		i++;
	}
	return (dest);
}
/*
int main () {
   const char src[50] = "https://www.tutorialspoint.comdsfsdfsdfsdfsdfsdfsd";
   char dest[60];
   strcpy(dest,"Heloooo!!");
   printf("Before memcpy dest = %s\n", dest);
   ft_memcpy(dest, src, 60);
   printf("After memcpy dest = %s\n", dest);
   
   return(0);
}
*/