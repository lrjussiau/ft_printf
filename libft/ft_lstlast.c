/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljussiau <ljussiau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 11:23:39 by ljussiau          #+#    #+#             */
/*   Updated: 2023/10/13 11:47:55 by ljussiau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst != NULL)
	{
		while (lst -> next != NULL)
			lst = lst -> next;
		return (lst);
	}
	return (0);
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

    // Imprimer le contenu du dernier élément
    t_list *last_node = ft_lstlast(node1);

	print_list(mylist);

	int a = *((int *)last_node -> content);
    if (last_node != NULL)
        printf("Contenu du dernier élément : %d\n", a);

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