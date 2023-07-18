/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgonzal2 <cgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 22:32:31 by cgonzal2          #+#    #+#             */
/*   Updated: 2023/07/17 10:25:07 by cgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = 0;
	if (s1 != 0 && set != 0)
	{
		i = 0;
		j = ft_strlen(s1);
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (s1[j - 1] && ft_strchr(set, s1[j - 1]) && j > i)
			j--;
		str = (char *)malloc(sizeof(char) * (j - i + 1));
		if (str)
			ft_strlcpy(str, &s1[i], j - i + 1);
	}
	return (str);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"  // Incluye los archivos de cabecera necesarios

int main(void) {
    char *str = "---Hello, world!  ---";
    char *set = "-";

    char *trimmed = ft_strtrim(str, set);
    if (trimmed != NULL) {
        printf("Original string: \"%s\"\n", str);
        printf("Trimmed string: \"%s\"\n", trimmed);
        free(trimmed);  // Liberar la memoria asignada para la cadena resultante
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
*/