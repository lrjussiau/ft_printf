/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljussiau <ljussiau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:32:00 by ljussiau          #+#    #+#             */
/*   Updated: 2023/10/12 12:38:21 by ljussiau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdio.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
	return ;
}
/*
int main()
{
    char c = 'A';
    int fd = 1;  // Assume writing to standard output (stdout)

    printf("Printing character using ft_putchar_fd:\n");
    ft_putchar_fd(c, fd);

    return 0;
}
*/