/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgonzal2 <cgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 16:25:46 by cgonzal2          #+#    #+#             */
/*   Updated: 2023/07/13 21:50:34 by cgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	location;

	location = ft_strlen(str);
	while (location > 0)
	{
		location --;
		if (str[location] == c)
			return ((char *)&str[location]);
	}	
	if (str[location] == c)
		return ((char *)&str[location]);
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "Hello, world!";
    char *ptr = strrchr(str, 'H');
	char *ptr1 = ft_strrchr(str, 'H');
    
    if (ptr != NULL) {
        printf("Última ocurrencia de 'o' encontrada en: %s\n", ptr);
    } else {
        printf("No se encontró la ocurrencia de 'o'\n");
    }
	    if (ptr1 != NULL) {
        printf("Mi programa Última ocurrencia de 'o' encontrada en: %s\n", ptr);
    } else {
        printf("Mi programa No se encontró la ocurrencia de 'o'\n");
    }
    
    return 0;
}
*/

