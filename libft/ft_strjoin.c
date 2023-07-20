/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgonzal2 <cgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 19:24:54 by cgonzal2          #+#    #+#             */
/*   Updated: 2023/07/20 22:32:59 by cgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *str1, const char *str2)
{
	int		total_length;
	char	*result;

	// Obtener la longitud de las cadenas
	// Calcular la longitud total de la nueva cadena
	total_length = ft_strlen(str1) + ft_strlen(str2);
	// Asignar memoria para la nueva cadena
	result = (char *)malloc((total_length + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	// Copiar la primera cadena a la nueva cadena
	ft_strcpy(result, str1);
	// Concatenar la segunda cadena a la nueva cadena
	ft_strcat(result, str2);
	return (result);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	const char	*str1;
	const char	*str2;
	char		*joined;

	str1 = "Hello, ";
	str2 = "world!";
	joined = ft_strjoin(str1, str2);
	if (joined != NULL)
	{
		printf("Joined string: %s\n", joined);
		free(joined);
	}
	return (0);
}
*/