/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljussiau <ljussiau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:54:52 by ljussiau          #+#    #+#             */
/*   Updated: 2023/10/13 16:02:40 by ljussiau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *str1, const void *str2, unsigned int n)
{
	char				*s1;
	char				*s2;

	s1 = (char *)str1;
	s2 = (char *)str2;
	while (n && (*s1 == *s2))
	{
		++s1;
		++s2;
		--n;
	}
	if (n == 0)
		return (0);
	else
	{
		return (*(unsigned char *)s1 - *(unsigned char *)s2);
	}
}
/*
int main () {
   char str1[15];
   char str2[15];
   int ret;
   int re;

   strcpy(str1, "atoms\0\0\0\0");
   strcpy(str2, "atoms\0abc");

   ret = ft_memcmp(str1, str2, 8);
   re = memcmp(str1, str2, 8);

   printf("%d\n", re);
	printf("%d\n", ret);
   
   return(0);
}
*/