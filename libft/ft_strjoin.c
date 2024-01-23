/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljussiau <ljussiau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 10:43:06 by ljussiau          #+#    #+#             */
/*   Updated: 2023/10/11 11:09:08 by ljussiau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	len;
	unsigned int	i;
	char			*str;

	len = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == 0)
		return (NULL);
	i = 0;
	while (*s1)
	{
		str[i] = *s1;
		i++;
		s1++;
	}
	while (*s2)
	{
		str[i] = *s2;
		i++;
		s2++;
	}
	str[i] = '\0';
	return (str);
}
/*
int main()
{
    const char *s1 = "Hello, ";
    const char *s2 = "World!";
    char *joined_str = ft_strjoin(s1, s2);

    if (joined_str == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("s1: %s\n", s1);
    printf("s2: %s\n", s2);
    printf("Joined string: %s\n", joined_str);

    // Don't forget to free the allocated memory
    free(joined_str);

    return 0;
}
*/