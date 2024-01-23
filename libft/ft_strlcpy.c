/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljussiau <ljussiau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:17:09 by ljussiau          #+#    #+#             */
/*   Updated: 2023/10/16 17:20:39 by ljussiau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int size)
{
	int	i;

	if ((int)size > 0)
	{
		i = 0;
		while (i < (int)size - 1 && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
/*
void test(int size)
{
    char string[] = "Bonjours, c'est un test";
    char buffer[5];
    int r;

    r = strlcpy(buffer,string,size);

    printf("Copied '%s' into '%s', length %d\n", string, buffer, r);
}

int main()
{
    test(19);
    test(10);
    test(1);
    test(0);

    return(0);
}
*/