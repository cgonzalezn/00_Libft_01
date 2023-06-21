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
/*
#include <stdio.h>
#include <string.h>

int main() {
    int arr[10];
    size_t size = sizeof(arr);
    
    // Llenar el bloque de memoria con ceros
    memset(arr, 2, size);
    
    // Imprimir los valores del bloque de memoria
    for (size_t i = 0; i < size / sizeof(int); i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
	 ft_memset(arr, 3, size);
    
    // Imprimir los valores del bloque de memoria
    for (size_t i = 0; i < size / sizeof(int); i++) {
        printf("%d ", arr[i]);
    }
	
    return 0;
}
*/