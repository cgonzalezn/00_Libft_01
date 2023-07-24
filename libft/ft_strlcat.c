
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dst_len >= size)
		return (src_len + size);
	ft_strncpy(dst + dst_len, src, size - dst_len - 1);
	dst[size - 1] = '\0';
	return (dst_len + src_len);
}
/*
#include <stdio.h>
#include <string.h>

int main() {
    char dst[20] = "Hello";
    char src[] = ", world!";
	char dst1[20] = "Hello";
    char src1[] = ", world!";
    size_t size = sizeof(dst);
	size_t size1 = sizeof(dst1);

	 size_t total_length1 = ft_strlcat(dst1, src1, size1);


	  printf("Concatenated mia string: %s\n", dst1);
    printf("Total length: %zu\n", total_length1);

    return 0;
}
*/