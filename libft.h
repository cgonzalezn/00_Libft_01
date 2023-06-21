#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

void	*ft_memset(void *ptr, int c, size_t len);
char *ft_strrchr(const char *str, int c);
size_t ft_strlen(const char *str);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strcpy(char *dest, char *src);


#endif