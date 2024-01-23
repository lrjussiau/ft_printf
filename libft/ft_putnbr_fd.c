/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljussiau <ljussiau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:41:04 by ljussiau          #+#    #+#             */
/*   Updated: 2023/10/16 14:41:15 by ljussiau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	unsigned int	n;
	char			digit;

	if (nb < 0)
	{
		write(fd, "-", 1);
		n = -nb;
	}
	else
		n = nb;
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	digit = n % 10 + '0';
	write(fd, &digit, 1);
}
/*
int main()
{
    int n = 123;
    int fd = 1;  // Assume writing to standard output (stdout)

    printf("Printing character using ft_putchar_fd:\n");
    ft_putnbr(n, fd);

    return 0;
}
*/