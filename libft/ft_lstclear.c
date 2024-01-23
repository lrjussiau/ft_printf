/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljussiau <ljussiau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:49:19 by ljussiau          #+#    #+#             */
/*   Updated: 2023/10/16 14:34:50 by ljussiau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (lst && *lst)
	{
		ft_lstclear(&(*lst)->next, del);
		ft_lstdelone(*lst, del);
		*lst = 0;
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
    // Create three nodes with integer content
    int *data1 = malloc(sizeof(int));
    int *data2 = malloc(sizeof(int));
    int *data3 = malloc(sizeof(int));

    *data1 = 42;
    *data2 = 123;
    *data3 = 789;

    t_list *node1 = ft_lstnew(data1);
    t_list *node2 = ft_lstnew(data2);
    t_list *node3 = ft_lstnew(data3);

    // Create a linked list
    t_list *mylist = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

    // Print the initial list
    printf("Initial List:\n");
    print_list(mylist);

    // Clear the list
    ft_lstclear(&mylist, free);

    // Print the list after clearing
    printf("\nList after clearing:\n");
    print_list(mylist);  // Should print "NULL"

    return 0;
}
*/