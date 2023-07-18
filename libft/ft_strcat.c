/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgonzal2 <cgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 19:30:59 by cgonzal2          #+#    #+#             */
/*   Updated: 2023/07/15 19:34:15 by cgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	char	*result;

	result = dest;
	// Guarda la dirección de inicio de la cadena de destino
	// Avanza hasta el final de la cadena de destino
	while (*dest != '\0')
		dest++;
	// Copia los caracteres de la cadena fuente al final de la cadena destino
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	// Asegúrate de agregar el carácter nulo terminador al final de la cadena resultante
	*dest = '\0';
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	char		str1[20];
	const char	*str2;

	str1[20] = "Hello, ";
	str2 = "world!";
	ft_strcat(str1, str2);
	printf("Concatenated string: %s\n", str1);
	return (0);
}
*/