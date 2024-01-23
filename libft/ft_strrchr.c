/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljussiau <ljussiau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:54:20 by ljussiau          #+#    #+#             */
/*   Updated: 2023/10/18 12:19:30 by ljussiau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (c > 256)
		c -= 256;
	while (str[i])
		i++;
	if (c == '\0')
		return ((char *)&str[i]);
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i--;
	}
	return (0);
}

// int main () {
// 	char *str = "teste";
// 	char c = 'x';

//    char *s = ft_strrchr(str, (int)c);
//    printf("ft_strrchr |%s|\n", s);
//    s = strrchr(str, (int)c);
//    printf("strrchr |%s|\n", s);
//    return(0);
// }
