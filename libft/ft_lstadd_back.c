/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljussiau <ljussiau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 10:28:08 by ljussiau          #+#    #+#             */
/*   Updated: 2023/10/16 13:05:55 by ljussiau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	if (new != NULL)
	{
		last = *lst;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new;
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

	mylist = NULL;
    // Créer trois éléments avec un contenu de type int
    int *data1 = malloc(sizeof(int));
    int *data2 = malloc(sizeof(int));
    int *data3 = malloc(sizeof(int));

    *data1 = 42;
    *data2 = 123;
    *data3 = 789;

    // Créer les nœuds de la liste
    t_list *node1 = ft_lstnew(data1);
    t_list *node2 = ft_lstnew(data2);
    t_list *node3 = ft_lstnew(data3);

    // Lier les nœuds pour former une liste chaînée
    ft_lstadd_front(&mylist, node1);
	ft_lstadd_front(&mylist, node2);
	ft_lstadd_front(&mylist, node3);

	print_list(mylist);
	printf("\nNouvelle liste : \n");

	int *data4 = malloc(sizeof(int));
	*data4 = 120;
	t_list *node4 = ft_lstnew(data4);
	ft_lstadd_back(&mylist, node4);

	print_list(mylist);

    // Libérer la mémoire allouée pour les éléments
    free(data1);
    free(data2);
    free(data3);
    free(node1);
    free(node2);
    free(node3);

    return 0;
}
*/