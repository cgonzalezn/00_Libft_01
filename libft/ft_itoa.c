/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgonzal2 <cgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 12:00:13 by cgonzal2          #+#    #+#             */
/*   Updated: 2023/07/18 18:55:29 by cgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_num_len(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static char	*converter(int n, int sign, int num_len)
{
	char	*str;
	int		len;

	str = (char *)malloc(sizeof(char) * (num_len + 1));
	if (!str)
		return (NULL);
	str[num_len] = '\0';
	if (num_len == 1 && n == 0)
	{
		str[0] = '0';
		return (str);
	}
	len = num_len - 1;
	while (n > 0)
	{
		str[len] = n % 10 + '0';
		n /= 10;
		len--;
	}
	if (sign == -1)
			str[0] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	int		num_len;
	int		sign;

	sign = 1;
	num_len = get_num_len(n);
	if (n < 0)
	{
		sign = -1;
		n = -n;
	}
	return (converter(n, sign, num_len));
}
/*
#include <stdio.h>
#include "libft.h"

int main(void)
{
	int num = +8965;
	char *str = ft_itoa(num);
	
	printf("Number: %d\n", num);
	printf("String: %s\n", str);
	
	free(str); // Liberar la memoria asignada
	
	return 0;
}
*/
