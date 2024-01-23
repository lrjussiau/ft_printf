/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljussiau <ljussiau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:39:35 by ljussiau          #+#    #+#             */
/*   Updated: 2023/10/12 12:43:51 by ljussiau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	return ;
}

/*
int main()
{
    char *s = "Test";
    int fd = 1;  // Assume writing to standard output (stdout)

    printf("Printing character using ft_putchar_fd:\n");
    ft_putstr_fd(s, fd);

    return 0;
}
*/