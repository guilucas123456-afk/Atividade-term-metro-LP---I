#include <stdio.h>
 int main(){
    int n;
    int fatorial = 1;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        fatorial *= i;
    }
    printf("%d\n", fatorial);

    return 0;
 }