/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljussiau <ljussiau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 10:14:47 by ljussiau          #+#    #+#             */
/*   Updated: 2023/10/16 17:41:25 by ljussiau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, unsigned int len)
{
	char			*str;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) < (int)start)
		len = 0;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == 0)
		return (NULL);
	while (len)
	{
		str[i] = s[start];
		i++;
		start++;
		len--;
	}
	str[i] = '\0';
	return (str);
}
/*
int main()
{
    const char *input = "bullshit";
    unsigned int start = 400;
    size_t len = 20;

    char *result = ft_substr(input, start, len);
	printf("ft_substr : %s\n", result);

    free(result);

    return 0;
}
*/