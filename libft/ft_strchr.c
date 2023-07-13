/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgonzal2 <cgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 21:11:09 by cgonzal2          #+#    #+#             */
/*   Updated: 2023/07/13 21:21:46 by cgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0' && str[i] != c)
		i++;
	if (str[i] == '\0')
		return (NULL);
	return ((char *)&str[i]);
}
/*
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, world!";
    char ch = 'o';

    char *result = strchr(str, ch);
	char *result1 = ft_strchr(str, ch);

    if (result != NULL) {
        printf("El carácter '%c' se encontró en la posición %ld de la cadena.\n", ch, result - str);
    } else {
        printf("El carácter '%c' no se encontró en la cadena.\n", ch);
    }
	if (result1 != NULL) {
		printf("en mi funcion '%c' se encontró en la posición %ld de la cadena.\n", ch, result1 - str);
    } else {
        printf("El carácter '%c' en mi funcion, no se encontró en la cadena.\n", ch);
    }

    return 0;
}
*/