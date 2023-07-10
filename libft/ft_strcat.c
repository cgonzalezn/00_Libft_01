
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	available_space;

	j = ft_strlen(dst);  //0 1 2 3 4 = 5
	i = ft_strlen(src);  //0 1 2 3 4 5 0 0 = 8 
	available_space = size - j;
	if (available_space < 0)
		return (i + j);
	while ()
	{
	0
	}

}

#include <stdio.h>
#include <string.h>

int main() {
    char dst[20] = "Hello";
    char src[] = ", world!";
    size_t size = sizeof(dst);

    size_t total_length = strlcat(dst, src, size);

    printf("Concatenated string: %s\n", dst);
    printf("Total length: %zu\n", total_length);

    return 0;
}
