/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgonzal2 <cgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 16:26:37 by cgonzal2          #+#    #+#             */
/*   Updated: 2023/07/18 21:23:44 by cgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

char			*ft_strncpy(char *dest, const char *src, unsigned int n);
char			*ft_strcpy(char *dest, const char *src);
char			*ft_strcat(char *dest, const char *src);

void			*ft_memset(void *ptr, int c, size_t len);
void			*ft_bzero(void *ptr, size_t len);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memccpy(void *dest, const void *src, int c, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memchr(const void *ptr, int value, size_t num);
int				ft_memcmp(const void *ptr1, const void *ptr2, size_t num);
size_t			ft_strlen(const char *str);
unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
char			*ft_strchr(const char *str, int c);
char			*ft_strrchr(const char *str, int c);
char			*ft_strnstr(const char *haystack, const char *needle,
					size_t len);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_atoi(const char *str);
int				ft_isdigit(int c);
int				ft_isalpha(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_toupper(int c);
int				ft_tolower(int c);
void			*ft_calloc(size_t nmemb, size_t size);
char			*ft_strdup(const char *str);
char			*ft_substr(const char *str, int start, int length);
char			*ft_strjoin(const char *str1, const char *str2);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);
char			*ft_itoa(int n);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);

#endif