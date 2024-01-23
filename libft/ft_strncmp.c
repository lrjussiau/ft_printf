/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljussiau <ljussiau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:31:05 by ljussiau          #+#    #+#             */
/*   Updated: 2023/10/18 14:39:56 by ljussiau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	while (n && *s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
		n--;
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

   strcpy(str1, "test\200");
   strcpy(str2, "test\0");

   ret = ft_strncmp(str1, str2, 6);
   re = strncmp(str1, str2, 6);

   printf("%d\n", re);
	printf("%d\n", ret);
   
   return(0);
}
*/