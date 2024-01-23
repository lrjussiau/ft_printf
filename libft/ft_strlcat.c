/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljussiau <ljussiau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:48:35 by ljussiau          #+#    #+#             */
/*   Updated: 2023/10/19 10:53:23 by ljussiau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

unsigned	int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	i;

	i = 0;
	len = ft_strlen(dest);
	if (size < (unsigned int)len)
		return (ft_strlen(src) + size);
	while ((len + 1) < size && src[i] != '\0')
	{
		dest[len] = src[i];
		len++;
		i++;
	}
	dest[len] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[i]));
}
/*
int main()
{
    char dest[40] = "coucou ";
    char src[] = "test";
    int size = 9;
	int i;

	i = strlcat(dest, src, size);
	printf("%s\n", dest);
	printf("%d\n", i);


    return(0);
}
*/
