/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljussiau <ljussiau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:55:47 by ljussiau          #+#    #+#             */
/*   Updated: 2023/10/19 11:42:51 by ljussiau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_arg(char c, va_list args)
{
	int	x;

	x = 0;
	if (c == 'c')
		x += print_c(va_arg (args, int));
	else if (c == 's')
		x += print_s(va_arg (args, char *));
	else if (c == 'd')
		x += print_d(va_arg (args, int));
	else if (c == 'p')
		x += print_p(va_arg (args, unsigned long));
	else if (c == 'i')
		x += print_i(va_arg (args, int));
	else if (c == 'u')
		x += print_u(va_arg (args, unsigned int));
	else if (c == 'x')
		x += print_x(va_arg(args, unsigned int), 'x');
	else if (c == 'X')
		x += print_x(va_arg(args, unsigned int), 'X');
	else if (c == '%')
		x += print_c('%');
	return (x);
}

int	ft_printf(const char *str, ...)
{
	unsigned int	i;
	va_list			args;
	int				x;

	i = 0;
	x = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1] != '\0')
		{
			i++;
			x += ft_print_arg(str[i], args);
		}
		else
		{
			write(1, &str[i], 1);
			x++;
		}
		i++;
	}
	va_end(args);
	return (x);
}
/*
int main()
{
	char *c = "Test";
	int i = 13254;
	int j = 0;
	unsigned int u = 0;
	
	i = ft_printf("\001\002\007\v\010\f\r\n");
	j = printf("\001\002\007\v\010\f\r\n");

	ft_printf("ft_printf : %d\n", i);
	ft_printf("printf : %d\n", j);
}
*/