#include <stdio.h>
 int main(){
    int n[4];
    int soma = 0;
    for(int i = 0; i<5; i++){
        scanf("%d", &n[i]);
        soma += n[i];
    }

    printf("%d\n", soma);
    return 0;
 }