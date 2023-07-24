/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgonzal2 <cgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 20:06:21 by cgonzal2          #+#    #+#             */
/*   Updated: 2023/07/23 20:48:18 by cgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main() {
    char *src = NULL;
    char *dest1 = NULL;
	char *dest2 = NULL;
    size_t n = 3;

    // Usando ft_memcpy para copiar desde NULL a NULL con tamaño 3
    char *result = ft_memcpy(dest1, src, n);
	char *result2 = memcpy(dest2, src, n);



   //printf("Source string: %s\n", src);
    printf("Destination (ft_memcpy): %s\n", result);
    printf("Destination (memcpy): %s\n", result2);

    return 0;
}
*/
