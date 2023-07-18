/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgonzal2 <cgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 19:34:23 by cgonzal2          #+#    #+#             */
/*   Updated: 2023/07/18 20:42:37 by cgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (s && f)
	{
		while (*s)
		{
			f(i, s);
			s++;
			i++;
		}
	}
}
/*
#include <stdio.h>
#include "libft.h"

// Función de ejemplo que imprime el índice y el carácter
void print_index_and_character(unsigned int index, char *c)
{
    printf("Index: %u, Character: %c\n", index, *c);
    // Modificar el carácter si es necesario
    if (*c == 'a')
    {
        *c = 'A';
    }
}

int main(void)
{
    char str[] = "Hello, world!";
    
    printf("Original string: %s\n", str);
    
    // Aplicar la función print_index_and_character a cada carácter
    ft_striteri(str, print_index_and_character);
    
    printf("Modified string: %s\n", str);
    
    return 0;
}
*/