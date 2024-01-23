/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljussiau <ljussiau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:10:05 by ljussiau          #+#    #+#             */
/*   Updated: 2023/10/13 14:03:08 by ljussiau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, unsigned int len)
{
	char			*dst;
	const char		*source;
	unsigned int	i;

	dst = dest;
	source = src;
	i = 0;
	if (!dst & !source)
		return (NULL);
	if (source < dst)
	{
		while (i++ < len)
			dst[len - i] = source[len - i];
	}
	else
	{
		while (len -- > 0)
			*(dst ++) = *(source ++);
	}
	return (dest);
}

/*
int main () {
   const char src[50] = "rem ipssum dolor sit a";
   char dest[40] = "ssssssssssss";
   printf("Before memcpy dest = %s\n", dest);
   ft_memmove(dest, src, 8);
   printf("After memcpy dest = %s\n", dest);
   
   return(0);
}
*/