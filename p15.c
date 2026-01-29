#include <stdio.h>
int main() {
    for(int i=1;i<=4;i++){
        for(int k=1;k<=4-i;k++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%c",j+64);
        }
        for(int l=i-1;l>=1;l--){
            printf("%c",l+64);
        }
        printf("\n");
    }
    return 0;
}