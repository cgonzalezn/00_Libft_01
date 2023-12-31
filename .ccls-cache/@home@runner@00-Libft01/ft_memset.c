/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgonzal2 <cgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 16:21:28 by cgonzal2          #+#    #+#             */
/*   Updated: 2023/06/21 16:23:08 by cgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t len)
{
	char	*p;
	int		i;

	p = (char *)ptr;
	i = 0;
	while ((i < len))
	{
		p[i] = (char) c;
		i++;
	}
	return (ptr);
}
