/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgonzal2 <cgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:58:49 by cgonzal2          #+#    #+#             */
/*   Updated: 2023/07/15 18:58:53 by cgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *str, int start, int length)
{
	int		str_length;
	int		end;
	int		substr_length;
	char	*substr;

	str_length = ft_strlen(str);
	if (start < 0 || start >= str_length || length <= 0)
		return (NULL);
	// Calcular el índice final de la subcadena
	end = start + length;
	if (end > str_length)
		end = str_length;
	// Calcular la longitud de la subcadena
	substr_length = end - start;
	// Asignar memoria para la subcadena
	substr = (char *)malloc((substr_length + 1) * sizeof(char));
	if (substr == NULL)
		return (NULL);
	// Copiar la subcadena desde la cadena original
	ft_strncpy(substr, str + start, substr_length);
	substr[substr_length] = '\0';
	return (substr);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int	main(void)
{
	const char	*str;
	int			start;
	int			length;
	char		*sub;

	str = "Hello, world!";
	start = 7;
	length = 5;
	sub = ft_substr(str, start, length);
	if (sub != NULL)
	{
		printf("Substring: %s\n", sub);
		free(sub);
	}
	return (0);
}
*/