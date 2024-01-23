/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljussiau <ljussiau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:23:09 by ljussiau          #+#    #+#             */
/*   Updated: 2023/10/12 12:30:20 by ljussiau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		(*f)(i, s + i);
		i++;
	}
	return ;
}
/*
// Sample function to print the index and character
void print_index_and_char(unsigned int index, char *c)
{
    printf("Character at index %u is: %c\n", index, *c);
}

int main()
{
    char str[] = "Hello, world!";
    
    printf("Original string: %s\n", str);

    // Call ft_striteri with the print_index_and_char function
    ft_striteri(str, print_index_and_char);

    return 0;
}
*/