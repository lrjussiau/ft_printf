/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljussiau <ljussiau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 10:28:08 by ljussiau          #+#    #+#             */
/*   Updated: 2023/10/13 11:22:57 by ljussiau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new != NULL)
	{
		new -> next = *lst;
		*lst = new;
	}
}

/*
void print_list(t_list *head) {
    t_list *current = head;
    while (current != NULL) {
        printf("%d \n", *((int *)current->content));
        current = current->next;
    }
    printf("NULL\n");
}

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
	
	print_list(mylist);
   
	free(new_data);
	free(data);
	free(new_node);

    return 0;
}
*/