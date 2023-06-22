/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgonzal2 <cgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 16:26:37 by cgonzal2          #+#    #+#             */
/*   Updated: 2023/06/22 18:47:31 by cgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

char			*ft_strncpy(char *dest, char *src, unsigned int n);
char			*ft_strcpy(char *dest, char *src);

void			*ft_memset(void *ptr, int c, size_t len);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_bzero(void *ptr, size_t len);

char			*ft_strrchr(const char *str, int c);
size_t			ft_strlen(const char *str);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

#endif
