#include<stdio.h>
int main() {
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i+1;j++){
            int um = (i + j)%2;
            printf("%d", um);
        }
        printf("\n");   
    }
}