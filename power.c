#include<stdio.h>
int main(){
    int a;
    int b;
    int temp = 1;
    scanf("%d",&a);
    scanf("%d",&b);
    for(int i=1; i<=b; i++){
        temp = temp * a;
    }
    printf("%d",temp);
}