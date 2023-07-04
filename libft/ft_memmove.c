/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgonzal2 <cgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:16:13 by cgonzal2          #+#    #+#             */
/*   Updated: 2023/07/04 13:20:38 by cgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*t1;
	unsigned char	*t2;
	int				i;

	t1 = (unsigned char *)dest;
	t2 = (unsigned char *)src;
	if (t1 < t2)
		return (ft_memcpy(dest, src, n));
	if (t1 > t2)
	{
		while (n > 0)
		{
			t1[n - 1] = t2[n - 1];
			n--;
		}
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[14];
	char str2[14];

	strcpy(str, "Hello, world!");
	strcpy(str2, str);
	memmove(str + 7, str, 3);
	printf("%s\n", str);

	ft_memmove(str2 + 7, str, 3);
	printf("%s\n", str2);

	return 0;
}
*/
