/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgonzal2 <cgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 20:27:53 by cgonzal2          #+#    #+#             */
/*   Updated: 2023/06/30 20:41:35 by cgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
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
		if (s[i] == (unsigned char)c)
			return ((void *)(d + i + 1));
		i++;
	}
}

/*
#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Hello, world!";
    char dest[20];
    char *ptr;
	char *ptr2;
	char mi_dest[20];
    
    ptr = memccpy(dest, src, 'w', strlen(src));
	ptr2 = ft_memccpy(mi_dest, src, 'w', strlen(src));
    if (ptr != NULL) {
        printf("Copia parcial exitosa. Se encontró '%c' en la posición %ld.\n", 'w', ptr - dest - 1);
		printf("Copia parcial exitosa. Se encontró '%c' en la posición %ld.\n", 'w', ptr2 - mi_dest - 1);
    } else {
        printf("Copia completa exitosa. No se encontró '%c'.\n", 'w');
		printf("Copia completa exitosa. No se encontró '%c'.\n", 'w');
    }
    
    printf("Destino: %s\n", dest);
    
    return 0;
}
*/
