#include <stdio.h>

int main(){
    
    int c;
    
    while((c = getchar()) != EOF){
        printf("%d\n", getchar() != EOF);
        putchar(c);
    }
    return 0;
}