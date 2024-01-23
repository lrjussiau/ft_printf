/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljussiau <ljussiau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 08:54:53 by ljussiau          #+#    #+#             */
/*   Updated: 2023/10/11 09:33:57 by ljussiau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(unsigned int count, unsigned int size)
{
	void	*ptr;

	ptr = (void *)malloc(count * size);
	if (ptr == 0)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
/*
int main() {
    unsigned int count = 5;
    unsigned int size = sizeof(int);

    // Testing ft_calloc
    int *arr = (int *)ft_calloc(count, size);

    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Memory allocated successfully using ft_calloc.\n");

    // Print the allocated array
    printf("Allocated array:\n");
    for (unsigned int i = 0; i < count; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(arr);

    return 0;
}
*/