#include <stdio.h>
#include <string.h>

int main() {
    char str[20] = "Hello, world!";
    memmove(str + 7, str, strlen(str) + 1);
    printf("%s\n", str);
    
    return 0;
}
