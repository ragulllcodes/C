#include <stdio.h>
int main() {
    for(int i='E';i>='A';i--){
        for(int k=i;k<='E';k++){
            printf("%c",k);
        }
        printf("\n");
    }
    return 0;
}