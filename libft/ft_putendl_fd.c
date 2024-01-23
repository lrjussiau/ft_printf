/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljussiau <ljussiau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:37:09 by ljussiau          #+#    #+#             */
/*   Updated: 2023/10/12 13:40:15 by ljussiau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
	return ;
}

/*
int main()
{
    char *s = "Test\n";
    int fd = 1;  // Assume writing to standard output (stdout)

    printf("Printing character using ft_putchar_fd:\n");
    ft_putendl_fd(s, fd);

    return 0;
}
*/