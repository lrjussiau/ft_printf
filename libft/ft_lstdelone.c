/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljussiau <ljussiau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:08:49 by ljussiau          #+#    #+#             */
/*   Updated: 2023/10/16 13:48:52 by ljussiau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!del)
		return ;
	if (lst)
	{
		del(lst->content);
		free(lst);
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
    t_list *mylist = NULL;

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

    printf("Liste initiale :\n");
    print_list(mylist);

    printf("\nNouvelle liste :\n");
    ft_lstdelone(node2, &free);

    print_list(mylist);

    // Libérer la mémoire allouée pour les éléments
    free(data1);
    free(data3);

    return 0;
}
*/