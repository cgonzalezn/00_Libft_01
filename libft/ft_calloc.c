/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgonzal2 <cgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 14:58:16 by cgonzal2          #+#    #+#             */
/*   Updated: 2023/07/15 15:55:19 by cgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	totalSize;
	void	*ptr;

	totalSize = nmemb * size;
	ptr = malloc(totalSize);
	if (ptr != NULL)
	{
		ft_memset(ptr, 0, totalSize);
	}
	return (ptr);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void) {
    int *numbers;
    size_t count = 5;
    
    // Se reservan 5 enteros (20 bytes en total) e inicializan a cero.
    numbers = (int *)ft_calloc(count, sizeof(int));
    
    if (numbers == NULL) {
        printf("Error en la asignación de memoria.\n");
        return (1);
    }
    
    // Imprimir los números
    for (size_t i = 0; i < count; i++) {
        printf("%d ", numbers[i]);
    }
    
    // Liberar la memoria asignada
    free(numbers);
    
    return (0);
}
*/