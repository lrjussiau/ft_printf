/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljussiau <ljussiau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 11:23:39 by ljussiau          #+#    #+#             */
/*   Updated: 2023/10/13 11:35:13 by ljussiau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 1;
	if (lst != NULL)
	{
		while (lst -> next != NULL)
		{
			lst = lst -> next;
			i++;
		}
		return (i);
	}
	return (0);
}
/*
int main()
{
	t_list *mylist;
    int *new_data = malloc(sizeof(int));
    *new_data = 42;
	int *data;
	data = malloc(sizeof(int));
	*data = 50;
	mylist = NULL;
    t_list *new_node = ft_lstnew(new_data);
    ft_lstadd_front(&mylist, new_node);

	new_node = ft_lstnew(data);
	ft_lstadd_front(&mylist, new_node);
	
	int a = ft_lstsize(mylist);
	printf("Nombre element list : %d\n", a);
   
	free(new_data);
	free(data);
	free(new_node);

    return 0;
}
*/