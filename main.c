/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgonzal2 <cgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 16:43:24 by cgonzal2          #+#    #+#             */
/*   Updated: 2023/06/22 20:51:22 by cgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h" 


//test memset
void test_ft_memset()
{
    char str1[20] = "Hello, World!";
    char str2[20] = "Hello, World!";

    printf("Original string: %s\n", str1);

    // Llamada a ft_memset
    ft_memset(str1, '*', 5);
    printf("Modified string (ft_memset): %s\n", str1);

    // Llamada a memset (para comparar los resultados)
    memset(str2, '*', 5);
    printf("Modified string (memset):   %s\n", str2);
}




// testing ft_strlen
void test_ft_strlen()
{
    // Casos de prueba
    char str1[] = "Hello";
    char str2[] = "";
    char str3[] = "Lorem ipsum dolor sit amet";

    size_t len1 = ft_strlen(str1);
    size_t len2 = ft_strlen(str2);
    size_t len3 = ft_strlen(str3);

    printf("Length of str1: %zu\n", len1);
    printf("Length of str2: %zu\n", len2);
    printf("Length of str3: %zu\n", len3);
}

// Función de prueba para ft_memcpy
void test_ft_memcpy()
{
    // Casos de prueba
    char src[] = "Hello, World!";
    char dest[20];

    ft_memcpy(dest, src, sizeof(src));

    printf("Copied string: %s\n", dest);
}


int main()
{
	test_ft_memset();
	//test_ft_strlen();
	//test_ft_memcpy();

    return 0;
}
