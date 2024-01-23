/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljussiau <ljussiau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:09:22 by ljussiau          #+#    #+#             */
/*   Updated: 2023/10/16 15:05:40 by ljussiau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, unsigned int n)
{
	unsigned int	len2;

	if (*little == '\0')
		return ((char *)big);
	len2 = ft_strlen(little);
	while (*big != '\0' && n-- >= len2)
	{
		if (*big == *little && ft_memcmp(big, little, len2) == 0)
			return ((char *)big);
		big++;
	}
	return (NULL);
}
/*
int main()
{
    const char *big = "Hello, World!";
    const char *little = "lo";
    unsigned int n = strlen(big);

    char *result = ft_strnstr(big, little, 5);

    printf("Original string: \"%s\"\n", big);
    printf("Substring to find: \"%s\"\n", little);
    if (result)
        printf("Substring found at: \"%s\"\n", result);
    else
        printf("Substring not found.\n");

    return 0;
}
*/