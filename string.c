#include <stdio.h>
#include <string.h>

int main(){
    char str[1000];
    scanf("%[^\n]", str);
    int tam = strlen(str);
    printf("%d\n", tam);

    return 0;
}