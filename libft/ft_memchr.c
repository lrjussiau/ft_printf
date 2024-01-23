/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljussiau <ljussiau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:41:19 by ljussiau          #+#    #+#             */
/*   Updated: 2023/10/13 16:16:45 by ljussiau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n--)
	{
		if (*str != (unsigned char)c)
			str++;
		else
			return (str);
	}
	return (NULL);
}
/*
int main () {
   const char str[] = "https://wwwtutorialspointcom";
   const char ch = '.';
   char *ret;

   ret = ft_memchr(((void *)0), '\0', 0x20);

   printf("ft_memchr is - |%s|\n", ret);

	ret = memchr(((void *)0), '\0', 0x20);

   printf("ft_memchr is - |%s|\n", ret);

   return(0);
}
*/