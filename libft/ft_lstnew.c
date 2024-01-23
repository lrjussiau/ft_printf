/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljussiau <ljussiau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 10:13:26 by ljussiau          #+#    #+#             */
/*   Updated: 2023/10/13 10:27:56 by ljussiau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (node == 0)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
/*
int main()
{
    // Création d'un nouvel élément avec du contenu
    int *data = malloc(sizeof(int));
    *data = 42;


    t_list *node = ft_lstnew(data);

    if (node != NULL)
    {
        printf("Nouvel élément créé avec succès.\n");
        printf("Contenu de l'élément : %d\n", *((int *)node->content));

        free(data);
        free(node);
    }

    return 0;
}
*/