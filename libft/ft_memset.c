/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgonzal2 <cgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 16:21:28 by cgonzal2          #+#    #+#             */
/*   Updated: 2023/07/20 19:22:30 by cgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t len)
{
	char	*p;
	size_t	i;

	p = (char *)ptr;
	i = 0;
	while ((i < len))
	{
		p[i] = (char) c;
		i++;
	}
	return (ptr);
}
/*
#include <stdio.h>
#include <string.h>

void *ft_memset(void *s, int c, size_t n);

int main() {
    char str[50];

    // Inicializar el arreglo str con 'X' utilizando la función ft_memset
    size_t len = 10;
    ft_memset(str, 'X', len);

    // Mostrar el contenido del arreglo str después de usar ft_memset
    printf("Arreglo después de ft_memset: %s\n", str);

    // Ahora, utilizar la función memset de la biblioteca estándar para comparar los resultados
    char str_std[50];
    memset(str_std, 'X', len);

    // Comparar los resultados con la función memcmp de la biblioteca estándar
    if (memcmp(str, str_std, len) == 0) {
        printf("Los resultados son iguales.\n");
    } else {
        printf("Los resultados son diferentes.\n");
    }

    return 0;
}*/