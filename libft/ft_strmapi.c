/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgonzal2 <cgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 19:07:04 by cgonzal2          #+#    #+#             */
/*   Updated: 2023/07/18 19:14:29 by cgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			len;
	char			*result;
	unsigned int	i;

	if (s == NULL || f == NULL)
		return (NULL);
	len = ft_strlen(s);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "libft.h"

// Función de ejemplo que convierte los caracteres a mayúsculas
char convert_to_uppercase(unsigned int index, char c)
{
    if (index % 2 == 0)
    {
        return toupper(c);
    }
    else
    {
        return c;
    }
}

int main(void)
{
    char str[] = "Hello, World!";
    
    // Aplicar la función convert_to_uppercase a cada carácter del string
    char *result = ft_strmapi(str, convert_to_uppercase);
    
    printf("Original string: %s\n", str);
    printf("Modified string: %s\n", result);
    
    free(result);
    
    return 0;
}
*/
