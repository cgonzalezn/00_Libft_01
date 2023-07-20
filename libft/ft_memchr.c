/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgonzal2 <cgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:57:22 by cgonzal2          #+#    #+#             */
/*   Updated: 2023/07/20 19:17:53 by cgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int value, size_t num)
{
	const unsigned char	*p;
	unsigned char		v;
	size_t				i;

	p = (const unsigned char *)ptr;
	v = (unsigned char)value;
	i = 0;
	while (i < num)
	{
		if (p[i] == v)
			return ((void *)(p + i));
		i++;
	}
	return (NULL);

}
/*
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, world!";
    char *result = memchr(str, 'a', strlen(str));
	char *result2 = ft_memchr(str, 'a', ft_strlen(str));

    if (result != NULL) {
        printf("El caracter 'w' se encontró en la posición: %ld\n", result - str);
		printf("Pointer address: %p\n", (void*)result);

    } else {
        printf("El caracter 'w' no se encontró en la cadena.\n");
    }

    if (result2 != NULL) {
        printf("El caracter 'w' se encontró en la posición: %ld\n", result2 - str);
		printf("Pointer address: %p\n", (void*)result2);

    } else {
        printf("El caracter 'w' no se encontró en la cadena, mi funcion.\n");
    }

    return 0;
}
*/