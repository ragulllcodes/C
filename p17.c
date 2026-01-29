#include <stdio.h>
int main() {
    for(int i=4;i>=1;i--){
        for(int k=1;k<=i;k++){
            printf("*");
        }
        for(int j=3;j>=i;j--){
            printf(" ");
        }
        for(int l=3;l>=i;l--){
            printf(" ");
        }
        for(int m=i;m>=1;m--){
            printf("*");
        }
        printf("\n");
    }
    for(int i=1;i<=4;i++){
        for(int k=1;k<=i;k++){
            printf("*");
        }
        for(int j=3;j>=i;j--){
            printf(" ");
        }
        for(int l=3;l>=i;l--){
            printf(" ");
        }
        for(int m=i;m>=1;m--){
            printf("*");
        }
        printf("\n");
    }  
    return 0;
}