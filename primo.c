#include <stdio.h>

void primo(int x){
    int c = 0;
    for(int i=1; i<=x; i++){
        if(x%i == 0){
            c++;
        }
    }
    
    if(c<=2) printf("Primo\n");
    else printf("Não primo\n");
}

int main(){
    int n;
    scanf("%d", &n);

    primo(n);

    return 0;
}