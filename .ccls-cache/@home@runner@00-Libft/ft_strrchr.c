#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
  int  i;

  i = ft_strlen(str);
  while(str[i]!='0')
    {
      if (str[i-1] == c)
        return 
    }
  
  
}



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

    return 0;
}