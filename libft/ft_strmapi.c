/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljussiau <ljussiau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:26:28 by ljussiau          #+#    #+#             */
/*   Updated: 2023/10/12 11:46:44 by ljussiau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*str;

	i = 0;
	len = ft_strlen(s);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == 0)
		return (NULL);
	while (s[i])
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
// Function to be passed to ft_strmapi
char add_one(unsigned int index, char c)
{
    // Since index is unused, we can omit it to remove the warning
    (void)index;
    return c + 1;
}

int main()
{
    const char *input_str = "Hello, world!";
    
    printf("Input string: %s\n", input_str);

    char *result = ft_strmapi(input_str, add_one);

    if (result != NULL)
    {
        printf("Result string: %s\n", result);
        free(result);  // Free the allocated memory for the result
    }
    else
    {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
*/