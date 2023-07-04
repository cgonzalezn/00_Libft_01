/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgonzal2 <cgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 13:13:05 by cgonzal2          #+#    #+#             */
/*   Updated: 2023/07/04 13:20:22 by cgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)

{
	unsigned char	*src1;
	unsigned char	*src2;
	size_t			i;

	src1 = (unsigned char *)ptr1;
	src2 = (unsigned char *)ptr2;
	i = 0;
	while (i < num)
	{
		if (src1[i] != src2[i])
			return (src1[i] - src2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Hellq";
    char str2[] = "Hellq";
    int result1 = ft_memcmp(str1, str2, 5);
	int result = memcmp(str1, str2, 5);

    if (result < 0)
        printf("str1 is less than str2\n");
    else if (result > 0)
        printf("str1 is greater than str2\n");
    else
        printf("str1 is equal to str2\n");

	  if (result1 < 0)
        printf("my function: str1 is less than str2\n");
    else if (result1 > 0)
        printf("my function: str1 is greater than str2\n");
    else
        printf("my function: str1 is equal to str2\n");
*/