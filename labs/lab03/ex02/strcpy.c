#include <stdio.h>
#include <string.h>

int main() {
    char str[15];
    strcpy(str, "hakuna matata!");
    
    printf("%s\n", str);
    printf("%c\n", str[0]);
    printf("%p\n", &str);
    printf("%p\n", &str[0]);

    return 0;
}
