
#include "libft.h"
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

///TEST ft_strchr.c
/*
#include <stdio.h>
#include <string.h>

int main() {
    const char *str = "Hello, world!";
    char c = 'o';

    char *result = strrchr(str, c);
    if (result != NULL) {
        printf("Última aparición de '%c' encontrada en: %s\n", c, result);
    } else {
        printf("'%c' no se encontró en la cadena.\n", c);
    }
*/
