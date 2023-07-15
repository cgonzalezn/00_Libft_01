/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgonzal2 <cgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 15:56:41 by cgonzal2          #+#    #+#             */
/*   Updated: 2023/07/15 16:16:36 by cgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t len;
	char *newStr;
	
	len = ft_strlen(str) + 1; 
	newStr = malloc(len);   // Asignar memoria para la cadena duplicada
	if (newStr != NULL)
	{
		ft_strcpy(newStr, str); // Copiar la cadena original a la memoria asignada
	}
	return (newStr); // Retornar la cadena duplicada
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	const char *original = "Hello, world!";
	char *duplicate = ft_strdup(original);
	if (duplicate != NULL)
	{
		printf("Original: %s\n", original);
		printf("Duplicate: %s\n", duplicate);
		free(duplicate); // Liberar la memoria asignada
	}
	return (0);
}
*/